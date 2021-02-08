/* Name: Utkarsh Kumar
Roll No: B18EC033
Leetcode Username: utkarshkanswal
*/



class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int> res(n,0);
        for(int i=0;i<n;i++)
            res[i]=INT_MAX;
        vector<int> pos;
        for(int i=0;i<n;i++)
        {
            if(s[i]==c)
                pos.push_back(i);
        }
        for(int i=0;i<pos.size();i++){
            int j=pos[i];
            int len=0;
            while(j>=0){
                res[j]=min(res[j],len);
                j--;
                len++;
            }
            
            len=0,j=pos[i];
            while(j<n){
                res[j]=min(res[j],len);
                len++;
                j++;
            }
        }
        return res;  
    }
};