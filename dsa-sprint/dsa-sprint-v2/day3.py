# https://leetcode.com/problems/valid-parentheses/

# logic i came up with:
# the basic logic for the string to be valid is that for every item, 
# there must be an opposite pair to match. if there's no pair at right 
#     position, then invalid. hence, everytime an opening bracket is 
#     encountered push it to stack. when a closing bracket -> 
#     1. if stack is empty, the point of having any opening pair is immediately ruled out. 
#     2. check the top of the stack, 
#     if the opening bracket is found, pop the opening bracket 
#     else declare string as invalid for either not finding it at right position or for not finding it at all. 
#     string is considered valid if stack is empty after all these.

# pseudocode:
# create an empty stack [list] and a dictionary to hold brackets (item-opposite item pair as said in logic)
# iterate over string:
#  a. if the character is in the dictionary (opening bracket), append it to stack
#  b. else if charecter is in dict values (closing bracket)
#      i. if stack is empty, return false
#      ii. if opening pair of this closing bracket is not found at stack's top, then return false.
# return true if stack is empty after all these operations (string is valid)

class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        brackets = {'(': ')', '{': '}', '[': ']'}

        for char in s:
            if char in brackets:
                stack.append(char)
            elif char in brackets.values():
                if not stack or brackets[stack.pop()] != char:
                    return False

        return not stack