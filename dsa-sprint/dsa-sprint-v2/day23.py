# https://leetcode.com/problems/path-sum/
# logic: we traverse each path of tree till we encounter a leaf node, and check if the path_sum matches with the target. if yes, immediately return True, if not we explore other paths. we can use recursion here to traverse tree, base case is when node is None. each time we encounter node in path, we add node value to path_sum var. if we haven't reached the leaf node yet, we traverse the left subtree and then right subtree recursively. if result received on any of those left/right subtrees is True, then we return True there itself and stop traversing.

class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        def traverse(node, path_sum, target):
            if node is None:
                return False

            path_sum += node.val

            if node.left is None and node.right is None:
                if path_sum == target:
                    return True

            left_result = traverse(node.left, path_sum, target)
            if left_result:
                return True

            right_result = traverse(node.right, path_sum, target)
            if right_result:
                return True

            return False

        return traverse(root, 0, targetSum)
