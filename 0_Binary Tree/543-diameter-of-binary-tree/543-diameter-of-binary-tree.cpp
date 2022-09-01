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
    int height(TreeNode* root){
        if(!root) return 0;
        return 1 + max(height(root->left), height(root->right));
    }
    
   void solve(TreeNode* root, int &m){
       if(!root) return;
       int left = height(root->left);
       int right = height(root->right);
       m = max(m, left+right);
       solve(root->left, m);
       solve(root->right, m);
       
   }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int m = 0;
        solve(root, m); 
        return m;
    }
};