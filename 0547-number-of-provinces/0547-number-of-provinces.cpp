class Solution {
public:
void dfs(vector<vector<int>> &adj, vector<int>&vis,int s)
{
    vis[s]=1;
    for(auto it:adj[s])
    {
       if(!vis[it])
       dfs(adj,vis,it);

    }
}
  
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int m=isConnected[0].size();
        vector<vector<int>> adjList(n);
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
            adjList[i].push_back(j);
            adjList[j].push_back(i);
                }
        }
        }
        vector<int> vis(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                c++;
            
            dfs(adjList,vis,i);
        }
        }
        return c;
        
    }
};