# https://leetcode.com/problems/leaf-similar-trees/
# logic: basic logic is to traverse through both trees recursively, while storing their leaf nodes and finally comparing both leaf storages, if they are equal or not. 

class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        def traverse(root):
            if not root:
                return []

            if not root.left and not root.right:
                return [root.val]

            left_result = traverse(root.left)
            right_result = traverse(root.right)
            
            return left_result + right_result

        return traverse(root1) == traverse(root2)