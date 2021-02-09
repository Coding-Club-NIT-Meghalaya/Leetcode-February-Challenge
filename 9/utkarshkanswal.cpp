/*Name: Utkarsh Kumar
Roll No: B18EC033
Leetcode Username:utkarshkanswal
*/


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
    vector<int> temp;
    void inorder(TreeNode* root,int &x)
    {
        if(root==nullptr)
            return;
        inorder(root->right,x);
        root->val+=x;
        x=root->val;
        inorder(root->left,x);
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        temp.clear();
        int x=0;
        TreeNode* start=root;
        inorder(start,x);
        return root;
    }
};