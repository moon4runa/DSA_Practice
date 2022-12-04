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
    
    TreeNode* solve(int rootIndex, int start, int end, vector<int>& inorder, vector<int>& postorder){
        if(rootIndex < 0 || start > end) return NULL;
        
        TreeNode* root = new TreeNode(postorder[rootIndex]);
        int index;
        for(int i=start; i<=end; i++){
            if(inorder[i] == root->val){
                index = i;
                break;
            }
        }
        
        root->left = solve(rootIndex - (end - index + 1), start, index -1, inorder, postorder);
        root->right = solve(rootIndex - 1, index + 1, end, inorder, postorder);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();
        return solve(n-1, 0, n-1, inorder, postorder );
    }
};