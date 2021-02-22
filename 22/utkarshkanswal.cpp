/* Name: Utkarsh Kumar
RollNo: B18EC033
Leetcode Username: utkarshkanswal
*/

class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
       int n=d.size();
       int loc[n+1];
        memset(loc,0,sizeof(loc));
       for(int i=0;i<s.size();i++)
       {
            for(int j=0;j<d.size();j++)
            {
                if(loc[j]<d[j].size()&&d[j][loc[j]]==s[i])
                    loc[j]++;
            }
        }
        string res="";
        for(int i=0;i<n;i++)
        {
            if(loc[i]==d[i].size())
            {
                if(res.size()<loc[i])
                    res=d[i];
                else if(res.size()==loc[i])
                    res=min(res,d[i]);
            }
        }
        return res;
    }
};