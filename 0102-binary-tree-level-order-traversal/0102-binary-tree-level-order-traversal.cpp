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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        
        if(!root) return res;
        
        queue<TreeNode* > q; // 15 7 
        q.push(root);
        
        while(!q.empty()){
            int level_size = q.size(); // 2
            vector<int> temp; // 9 20
            while(level_size--){ // 0
                TreeNode* node = q.front(); // 20
                q.pop();
                temp.push_back(node->val); 
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            res.push_back(temp); // [[3], [9, 20 ], [15, 7]]
        }
        
        
        return res;
    }
};