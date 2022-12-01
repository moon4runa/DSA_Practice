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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};
        
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        int flag = 0; // level 
        
        while(!q.empty()){ 
            vector<int> temp;
            int levelsize = q.size();
            flag += 1; // 2
            while(levelsize--){
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(flag%2 == 0) reverse(temp.begin(), temp.end()); // check for even level 
            res.push_back(temp);
            
            
        }
        return res;
        
    }
};