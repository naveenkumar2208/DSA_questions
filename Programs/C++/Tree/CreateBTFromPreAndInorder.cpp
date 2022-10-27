/*Given two integer arrays preorder and inorder where 
preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree, 
construct and return the binary tree.*/

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

TreeNode* solve(int first, int last, vector<int>& preorder, vector<int>&inorder, int begin, int end,map<int,int>& m){
        if(end<begin || first>last) return NULL;
        
        TreeNode* node = new TreeNode(preorder[first]);
        
        int ind = m[node->val];
        int d = ind - begin;
        node->left = solve(first+1, first+d, preorder, inorder, begin, ind-1,m);
        node->right = solve(first+d+1, last, preorder, inorder, ind+1, end,m);
        return node;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> m;
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        TreeNode* ans = solve(0,preorder.size()-1,preorder, inorder, 0,inorder.size()-1,m);
        return ans;
    }

void printInorder(TreeNode* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    /* then print the data of node */
    cout << node->val << " ";
 
    /* now recur on right child */
    printInorder(node->right);
}

int main(){
    int n; cin>>n; //number of nodes in the tree
    vector<int> preorder,inorder;
    for(int i=0;i<n;i++){
        int t; cin>>t;
        preorder.push_back(t);
    }
    for(int i=0;i<n;i++){
        int t; cin>>t;
        inorder.push_back(t);
    }
    TreeNode* tree = buildTree(preorder,inorder);
    printInorder(tree);
    return 0;
}