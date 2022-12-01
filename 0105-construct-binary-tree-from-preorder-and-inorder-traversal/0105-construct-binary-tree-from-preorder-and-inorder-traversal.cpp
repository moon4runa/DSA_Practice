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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return solve(0, 0, inorder.size()-1, preorder, inorder);
    }
    
    TreeNode* solve(int rootIndex, int inStart, int inEnd, vector<int>&preorder, vector<int>& inorder){
        if(rootIndex > preorder.size() - 1 || inStart > inEnd) return NULL;
        TreeNode* root = new TreeNode(preorder[rootIndex]);
        int inIndex = 0;
        for(int i=inStart; i<=inEnd; i++){
            if(inorder[i] == root->val){
                inIndex = i;
                break;
            }
        }
        
        root->left = solve(rootIndex + 1, inStart, inIndex-1, preorder, inorder);
        root->right = solve(rootIndex + inIndex - inStart + 1,inIndex+1, inEnd, preorder, inorder);
        
        
        return root;
        
    }
};