# https://leetcode.com/problems/evaluate-boolean-binary-tree/
# logic: if root is leaf node, return it's boolean according to it's value. if it's not leaf, then it means it has left or right children, so we recursively call it on left and right subtrees and store the results in variables. then we check the value of root node to see how to combine left and right results (2-OR, 3-AND).
class Solution:
    def evaluateTree(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return False

        if root.left is None and root.right is None:
            return bool(root.val)

        left_result = self.evaluateTree(root.left)
        right_result = self.evaluateTree(root.right)

        if root.val == 2:
            return left_result or right_result
        elif root.val == 3:
            return left_result and right_result