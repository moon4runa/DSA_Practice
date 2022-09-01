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
    // void lows(TreeNode* root, int low, int &lsum){
    //     if(!root) return;
    //     if (root->val >= low){
    //         lsum += root-> val;
    //     }
    //     if(root->left) lows(root->left, low, lsum);
    //     if(root->right) lows(root->right, low, lsum);
    // }
    void sum(TreeNode* root, int low, int high, int &ans){
        if(!root) return;
        
        if(root->val > low){
            sum(root->left, low, high, ans);
        }
        if(root->val < high) sum(root->right, low, high, ans);
        
        if (root->val >= low && root->val <= high){
            ans += root-> val;
        }
        
    }
    
    
    // void highs(TreeNode* root, int high, int &hsum){
    //     if(!root) return;
    //     if(root->val <= high){
    //         hsum += root->val;
    //         //cout << hsum;
    //     }
    //     if(root->left) highs(root->left, high, hsum);
    //     if(root->right) highs(root->right, high, hsum);
    // }
    
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        int hsum = 0;
        int lsum = 0;
    
      
        sum(root, low, high, ans);
        //if(root->val <=high && root->val >=low) ans -= root->val;
        return ans;
     
     
    }
};