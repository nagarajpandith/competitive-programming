# https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
# logic: basic operation is same as twoSum problem, checking if complement exists in hashmap or not, only traversal is different as it's tree this time. we recursively check the left subtree, if it returns True then return True immediately, if not then recurseivly check in right subtree. 

class Solution:
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        def traverse(node, d):
            if not node:
                return False

            if traverse(node.left, d):
                return True

            c = k - node.val
            if c in d:
                return True
            d[node.val] = None

            return traverse(node.right, d)

        d = {}
        return traverse(root, d)