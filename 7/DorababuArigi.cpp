/*
Dorababu Arigi
b19cs039
dorababuarigi
*/
class Solution {
public:
    int find(int n,vector<int> v){
        for(int j=0;j<v.size();++j){
            if(v[j]==n){
                return 0;
            }
            if(n<v[j]){
                if(j==0){
                    return v[j]-n;
                }
                else{
                    int a=n-v[j-1];
                    int b=v[j]-n;
                    if(a>b){
                        return b;
                    }
                    else{
                        return a;
                    }
                }
            }
        }
        return n-v[v.size()-1];
    }
    vector<int> shor(string s,char c){
        vector<int> v;
        vector<int> a;
        for(int i=0;i<s.length();++i){
            if(s[i]==c){
                v.push_back(i);
            }
        }
        for(int i=0;i<s.length();++i){
              int k=find(i,v);
            a.push_back(k);
        }
        return a;
    }
    vector<int> shortestToChar(string s, char c) {
        return shor(s,c);
    }
};
