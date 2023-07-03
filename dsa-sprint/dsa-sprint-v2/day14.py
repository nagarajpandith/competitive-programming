# https://leetcode.com/problems/design-circular-queue/

# logic: i knew how normal queue operations are implemented. the things that were different in circular were, we have to handle rear and front pointers differently because they can wrap around. in initialisation, we use a list for storage of capacity "k", also 2 pointers rear and front and also a count var to keep count of actual size of queue. during enqueue, we use isFull -> if yes, we cannot insert more, if not insert the value from rear end and update the rear pointer. it will be updated to self.rear + 1 but as indices can wrap around in circular queue, we take modulus so that we have a valid index. we increment the count var to maintain actual size. same goes for dequeue but removing from front, updating front pointer and decrementing count. front and rear is just returning the elements pointed by front and rear pointers. isempty if count var is 0 and isFull if count var is equal to capacity "k".

class MyCircularQueue:
    def __init__(self, k: int):
        self.q = [None] * k
        self.k = k
        self.front = 0
        self.rear = 0
        self.count = 0

    def enQueue(self, value: int) -> bool:
        if self.isFull():
            return False
        self.q[self.rear] = value
        self.rear = (self.rear + 1) % self.k 
        self.count += 1
        return True

    def deQueue(self) -> bool:
        if self.isEmpty():
            return False
        self.q[self.front] = None
        self.front = (self.front + 1) % self.k
        self.count -= 1
        return True

    def Front(self) -> int:
        if self.isEmpty():
            return -1
        return self.q[self.front]

    def Rear(self) -> int:
        if self.isEmpty():
            return -1
        return self.q[(self.rear - 1) % self.k]

    def isEmpty(self) -> bool:
        return self.count == 0

    def isFull(self) -> bool:
        return self.count == self.k