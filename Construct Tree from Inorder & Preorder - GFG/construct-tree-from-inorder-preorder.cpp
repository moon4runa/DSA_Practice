//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        return solve(0, 0, n-1, in, pre, n);
    }
    
    Node* solve(int rootIndex, int inStart, int inEnd, int in[], int pre[], int n){
        if(rootIndex >= n || inStart > inEnd) return NULL;
        Node* root = new Node(pre[rootIndex]);
        int inIn = -1;
        for(int i=inStart; i<=inEnd; i++){
            if(in[i]== root->data){
                inIn = i;
                break;
            }
        }
        root->left = solve(rootIndex+1, inStart, inIn - 1, in, pre, n);
        root->right = solve(rootIndex + (inIn - inStart + 1), inIn+1, inEnd, in, pre, n);
        return root;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends