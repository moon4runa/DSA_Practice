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
    bool isMirror(TreeNode* node1, TreeNode* node2){
        if(node1==NULL && node2==NULL) return true; // Base case 1 
        if(node1==NULL || node2==NULL) return false; // Base case 2 
        
        bool mirror = isMirror(node1->left, node2->right) && isMirror(node1->right, node2->left);
        
        if(mirror && node1->val == node2->val) return true;
        return false;
        
    }
    
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true; 
        return isMirror(root->left, root->right);
        
    }
};