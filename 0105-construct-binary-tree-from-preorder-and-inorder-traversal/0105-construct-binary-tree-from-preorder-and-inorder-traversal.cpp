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
        return solve(0, 0, inorder.size()-1, preorder, inorder); // rootIndex = 0, start = 0, end= n-1
    }
    
    TreeNode* solve(int rootIndex, int start, int end, vector<int> &preorder, vector<int>& inorder){
        // Base Case
        if(rootIndex > preorder.size() - 1 || start > end) return NULL;
        
        // Create root node;
        TreeNode* root = new TreeNode(preorder[rootIndex]);
        
        // Search for root element in inorder  traversal
        int index;
        for(int i=start; i<=end; i++){
            if(inorder[i] == root->val){
                index = i;
                break;
            }
        }
        
        // left and right subtrees
        root->left = solve(rootIndex + 1, start, index -1, preorder, inorder);
        root->right = solve(rootIndex + (index - start + 1), index+1, end, preorder, inorder);
        
        
        return root;
    }
    
    
};