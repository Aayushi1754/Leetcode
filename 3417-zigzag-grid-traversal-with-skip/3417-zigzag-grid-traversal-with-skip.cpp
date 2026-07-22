class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j;
        vector<int> ans;
        bool flag=true;
        for(i=0;i<n;i++)
        {
            
            for(j=0;j<m;j++)
            {
                int index=(flag)?j:m-j-1;
                if(i%2==0 && index%2==0)
                ans.push_back(grid[i][index]);
                if(i%2!=0 && index%2!=0)
                ans.push_back(grid[i][index]);
            }
            flag=!flag;
        }
        return ans;
        
    }
};