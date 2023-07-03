# https://practice.geeksforgeeks.org/problems/sort-a-stack/1?page=1&category[]=Stack&sortBy=submissions

# logic: we can convert it into array and simply sort it with some sorting algo but as the question is tagged with stack, 
# we can achieve the same with it's push, pop operations. in stack we can only access top element, 
#     so we can think of popping that top element and putting it in it's right sorted place by comparing again and again 
#     i.e., we have to pop the top element, recursively divide the remaining smaller stack till it's empty 
#     and then we push the removed elements back into the stack by calling a recursive function that 
#     finds the correct position for the element and inserts it therer

# pseudocode:
# recursive approach, base case is when stack is empty
# pop top element of stack and hold in temp var
# recursively call this sorted function on remaining stack
# once stack gets empty, recursive calls start to unwind -> insert function is called with modified stack and item to be inserted (i.e. item which was popped)
# insert function -> if stack is empty or if item to be inserted is greater than stack's top, then push item to stack
# else, pop the stack's top and hold it in temp var, recursively call this insert function until i t finds position to insert the item

class Solution:
    def insert(self, s, item):
        if len(s) == 0 or item > s[-1]:
            s.append(item)
            return
        else:
            temp = s.pop()
            self.insert(s, item)
            s.append(temp)

    def sorted(self, s):
        if s:
            temp = s.pop()
            self.sorted(s)
            self.insert(s, temp)
        return s