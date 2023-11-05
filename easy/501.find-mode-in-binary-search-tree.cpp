/*
 * @lc app=leetcode id=501 lang=cpp
 *
 * [501] Find Mode in Binary Search Tree
 */

// @lc code=start
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
    vector<int> findMode(TreeNode* root) {
        int max = 0;
        map<int, int> count;
        vector<int> elements;
        vector<int> result;

        DFS(root, count, max);

        // 紀錄每個 node 出現的次數與最多次的次數
        // for (int i = 0; i < elements.size(); i++){
        //     count[elements[i]] += 1;
        //     max = count[elements[i]] > max ? count[elements[i]] : max;
        // }

        for (const auto& c: count){
            if(c.second == max){
                result.push_back(c.first);
            }
        }

        return result;
        
    }

private:
    void DFS(TreeNode* node, map<int, int>& count, int& max){
        if(node == NULL) // 如果走到底了
            return;

        DFS(node->left, count, max);
        // 紀錄每個 node 出現的次數與最多次的次數
        count[node->val] += 1;
        max = count[node->val] > max ? count[node->val] : max;
        DFS(node->right, count, max);
        
    }
};
// @lc code=end

