class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initial_color=image[sr][sc];
        queue<pair<int,int>> q;
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>res =image;
        res[sr][sc]=color;
        q.push({sr,sc});
        while(!q.empty())
        {
            int drow[]={-1,0,1,0};
            int dcol[]={0,1,0,-1};
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                
                int nrow=r+drow[i];
                int ncol=c+dcol[i];
                if(nrow>=0 && nrow< n && ncol >=0 && ncol<m && image[nrow][ncol]==initial_color && res[nrow][ncol]!=color) 
                {
                    q.push({nrow,ncol});
                    res[nrow][ncol]=color;
                }
            }
        }
        return res;
        
    }
};