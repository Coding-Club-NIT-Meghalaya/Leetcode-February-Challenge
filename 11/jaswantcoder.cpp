/*
Name: Jaswant Arya
Roll no. : B17CS036
Leetcode username: jaswantcoder
*//

class Solution {
public:
    bool isAnagram(string s, string t) {
        int h1[26]={0};
        int h2[26]={0};
        int i;
        for(auto it:s)
        h1[it-'a']++;
        
        for(auto x:t)
            h2[x-'a']++;
        cout<<endl<<endl;
        
        for(i=0;i<26;i++)
        {
            cout<<h1[i]<<" "<<h2[i]<<endl;
            if(h1[i]!=h2[i])
                return false;
        }
        
        return true;
            
        }
};
