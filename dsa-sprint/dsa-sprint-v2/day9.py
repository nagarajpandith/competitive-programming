# https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

# logic: we take a stack to store final soln, we traverse over the string and check if the current character and top of the stack are same, if they are same then they are adjancent duplicates. hence pop the top of the stack. if they are not same, then push character to stack.

# pseudocode:
# init a stack
# traverse the string
# if stack is not empty and stack[top] == character then stack.pop()
# else stack.push(character)

class Solution:
    def removeDuplicates(self, s: str) -> str:
        stack = []
        for i in s:
            if stack and stack[-1] == i:
                stack.pop()
            else:
                stack.append(i)
        return ''.join(stack)