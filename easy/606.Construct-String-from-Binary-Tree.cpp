/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string tree2str(TreeNode* root) {
        string result = to_string(root->val);
        DFS(root->left, result);
        if(!root->left && root->right){
            result += "()";
        }
        DFS(root->right, result);
        return result;
    }

    void DFS(TreeNode* node, string &result){
        if(!node){
            return;
        }

        result = result + "(" + to_string(node->val); 
        DFS(node->left, result);
        if(!node->left && node->right){
            result += "()";
        }
        DFS(node->right, result);
        result = result + ")";

        return;
    }
};
