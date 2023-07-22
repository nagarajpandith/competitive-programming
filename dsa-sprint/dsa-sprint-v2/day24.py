# https://leetcode.com/problems/maximum-depth-of-binary-tree/
# logic: the root node has two children, the path which will lead to highest depth would be by taking either of the two children as traversal paths. so we can recursively find height of left and right subtree of root node... max out of them is the result

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root == None:
            return 0

        left = self.maxDepth(root.left)
        right = self.maxDepth(root.right)

        return max(left, right) + 1