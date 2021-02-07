/*
Dorababu Arigi
dorababuarigi
b19cs039
*/
class Solution {
public:
    vector<int> v;
    void leveltra(TreeNode* root){
        if(!root){
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int i=q.size();
            for(int j=0;j<i;++j){
            TreeNode* temp;
            temp=q.front();
            q.pop();
            if(j==i-1){
                v.push_back(temp->val);
            }
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
        }
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        leveltra(root);
        return v;
    }
};
