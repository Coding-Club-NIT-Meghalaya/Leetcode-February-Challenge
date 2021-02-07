/* Name: Utkarsh Kumar
Roll no: B18EC033
Leetcode Username: utkarshkanswal
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
    vector<int> res;
       void bfs(TreeNode* root)
       {
           if(root==nullptr)
               return;
           queue<TreeNode*> q;
           q.push(root);
           q.push(nullptr);
           int last=0;
           while(q.size()>1)
           {
               TreeNode* curr=q.front();
               q.pop();
               if(curr==nullptr)
               {
                   res.push_back(last);
                   last=0;
                   q.push(nullptr);
                   continue;
               }
               last=curr->val;
               if(curr->left!=nullptr)
               {
                   q.push(curr->left);
               }
               if(curr->right!=nullptr)
               {
                   q.push(curr->right);
               }
           }
           res.push_back(last);
       }
public:
    vector<int> rightSideView(TreeNode* root) {
        bfs(root);
        return res;
    }
};