# https://leetcode.com/problems/symmetric-tree/
# logic: we have to basically check if right and left subtree are same. base case, when tree is empty or if left and right children subtrees are empty, then it is symmetric. if none of these base cases true, then we recursively check if left and right match. if both are empty, then symmetric, if only one of them is empty then not symmetric. if values of both are not equal then not symmetric. 

class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        def checkSym(st1, st2):
            if not st1 and not st2:
                return True
            if st1 and not st2 or not st1 and st2:
                return False
            if st1.val!=st2.val:
                return False
            return checkSym(st1.left, st2.right) and checkSym(st1.right, st2.left)

        if not root:
            return True

        left = root.left
        right = root.right

        if not left and not right:
            return True

        return checkSym(left, right)