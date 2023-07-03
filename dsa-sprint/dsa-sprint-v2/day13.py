# https://leetcode.com/problems/design-front-middle-back-queue/

# logic: while learning implementation of queue in python, came accross deque and it's O(1) operations append, appendleft etc. using that, push front is basically pushing element to left of queue -> appendleft, popfront is popping leftmost element -> popleft. push back is appending to right side -> append and popback is popping rightmost element -> pop. for push middle, we have to calculate middle index taking care of odd and even size. as said in constraints, we have to put it to lowest index if 2 choices are there, so floor division does that job. hence calculate mid index with floor division and insert val there. for pop middle, we again have to calculate mid index and then rotate the queue counter clockwise (right to left) till mid appears on left side and simply popleft. and reorder it by rotating clockwise (LtoR).

from collections import deque

class FrontMiddleBackQueue:
    def __init__(self):
        self.q = deque()

    def pushFront(self, val: int) -> None:
        self.q.appendleft(val)

    def pushMiddle(self, val: int) -> None:
        mid = len(self.q) // 2
        self.q.insert(mid, val)

    def pushBack(self, val: int) -> None:
        self.q.append(val)

    def popFront(self) -> int:
        if len(self.q) == 0:
            return -1
        return self.q.popleft()

    def popMiddle(self) -> int:
        if len(self.q) == 0:
            return -1

        mid = (len(self.q) - 1) // 2
        self.q.rotate(-mid) 
        popped = self.q.popleft()
        self.q.rotate(mid)
        return popped

    def popBack(self) -> int:
        if len(self.q) == 0:
            return -1
        return self.q.pop()
