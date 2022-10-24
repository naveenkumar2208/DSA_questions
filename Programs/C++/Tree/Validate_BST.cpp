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

/*
This repository targets the method how to validate whether a given BST is valid or no.
In order to check one can first do the inorder traversal and after that check whether the traversal 
is in increasing order or not. If it is in increasing order then the BST is valid otherwise not.
*/

class Solution {
public:
    vector<int> vr;
    void checkBST(TreeNode* root){
        if (root == NULL){
            return;
        }
        checkBST(root->left);
        vr.push_back(root->val);
        checkBST(root->right);
    }
    
    bool isValidBST(TreeNode* root) {
        checkBST(root);
        for(int i = 1; i<vr.size(); i++){
            if (vr[i] <= vr[i-1]){
                return false;
            }
            
        }
        return true;
    }
}