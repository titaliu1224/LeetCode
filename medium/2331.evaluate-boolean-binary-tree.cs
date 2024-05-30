/*
 * @lc app=leetcode id=2331 lang=csharp
 *
 * [2331] Evaluate Boolean Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public bool EvaluateTree(TreeNode root) {
        return DFS(root);
    }

    public bool DFS(TreeNode node){
        var left =  DFS(node.left);
        var right = DFS(node.right);

        switch (node.val)
        {
            case 2:
                return left || right;
            case 3:
                return left && right;
            default:
                return false;
        }
    }
}
// @lc code=end

