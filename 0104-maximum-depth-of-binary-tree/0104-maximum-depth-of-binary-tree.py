# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:

        maxDep =  0

        def dfs (root, maxDep):
            if root is None:
                return 0
            
            leftMax  = dfs(root.left, maxDep)
            rightMax = dfs(root.right, maxDep)

            currMax =  max(leftMax, rightMax)

            maxDep = max(maxDep, currMax +1)

            return maxDep
        
        return dfs(root, maxDep)