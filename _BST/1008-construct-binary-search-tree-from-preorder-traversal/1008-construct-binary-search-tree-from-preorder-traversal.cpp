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
    TreeNode* constructBST(vector<int> &preorder, int start, int end_){
        if(start >= preorder.size() || start > end_) return NULL;
     TreeNode* root = new TreeNode(preorder[start]);
        //root->val = preorder[start];
        int ind;
        for(int i=start; i <=end_; i++){
            if(root->val < preorder[i]){
                ind = i;
                break;
            }
        }
        root->left = constructBST(preorder, start + 1, ind -1);
        root->right = constructBST(preorder, ind, end_);
        return root;
        
    }
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        TreeNode* root = constructBST(preorder, 0, preorder.size()-1);
          return root;
        }
    
};