/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool findPath(TreeNode* root, TreeNode* node, vector<TreeNode*> &path){
        if(!root) return false;
        path.push_back(root);
        if(root->val == node->val) {
            return true;
        }
        if(findPath(root->left, node, path) || findPath(root->right, node ,path)) return true;
        path.pop_back();
        return false;
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path_p;
        vector<TreeNode*> path_q;
        if(!findPath(root, p, path_p) || !findPath(root, q, path_q)) return root;
        TreeNode* ans = root;
        int i = 1;
        while(i < path_p.size() && i < path_q.size()){
            if(path_p[i]->val == path_q[i]->val) ans = path_p[i];
            else break;
            i++;
        }
        return ans;
    }
};