/*
Name: Jaswant Arya
Roll no. : B17CS036
Leetcode username: jaswantcoder
*/

class Solution {
public:
    bool bipart(vector<vector<int>> & graph, vector<bool> & vis, vector<int> &v,int ind, int col )
    {
        if(vis[ind] && v[ind]==col)
                return true;;
             if(vis[ind] && v[ind]!=col)
                return false;
        vis[ind]=true;
        v[ind]=col;
        bool ans=true;
        col=col^1;
        for(auto i:graph[ind])
        {
            ans=ans && bipart(graph,vis,v,i,col);
        }
        return ans;
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        vector<bool> vis(graph.size());
        vector<int> v(graph.size());
        bool ans=true;
        if(graph.size()<=1)
            return true;
        
    
        for(int i=0;i<graph.size();i++)
       {
            if(!vis[i])
            {
                vis[i]=true;
                v[i]=0;
            
            
            for(auto ind:graph[i])
        {

            ans = ans && bipart(graph, vis, v, ind,1);
            if(!ans)
                return false;
        }}
        }
        return ans;
    }
};
