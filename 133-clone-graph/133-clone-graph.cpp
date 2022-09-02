/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    map<int, Node*> mp;
    
    void dfs(Node* node){
        if(mp.find(node->val)==mp.end()){
            mp[node->val] = new Node(node->val);
        }
        for(auto it: node->neighbors){
            if(mp.find(it->val)==mp.end()){
                mp[it->val] = new Node(it->val);
                mp[node->val]->neighbors.push_back(mp[it->val]);
                dfs(it);
            }
            else{
                mp[node->val]->neighbors.push_back(mp[it->val]);
            }
        }
        
    }
    
    
    Node* cloneGraph(Node* node) {
        if(node == NULL){
            return NULL;
        }
        dfs(node);
        return mp[node->val];
    }
};