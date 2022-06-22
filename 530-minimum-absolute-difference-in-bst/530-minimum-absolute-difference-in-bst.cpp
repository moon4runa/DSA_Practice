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
    
    void inorder(TreeNode* root, vector<int> &inord){
        if(!root) return;
        inorder(root->left, inord);
        inord.push_back(root->val);
        inorder(root->right, inord);
    }
    
    
    int getMinimumDifference(TreeNode* root) {
        vector<int> inord;
        inorder(root, inord);
        int ans = inord [1] - inord[0];
        for(int i=1; i < inord.size(); i++){
            ans = min(inord[i] - inord[i-1], ans);
        }
        return ans;
        
    }
};