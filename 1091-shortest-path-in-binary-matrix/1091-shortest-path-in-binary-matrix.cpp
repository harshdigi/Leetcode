class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1){return -1;}
        queue<pair<int,int>>q;
        vector dx={-1,1,0,0,1,1,-1,-1};
        vector dy={0,0,1,-1,1,-1,1,-1};
        q.push({0,0});
        int ans=1;
        while(!q.empty()){
        int s=q.size();
        while(s--){
        auto p=q.front();
        q.pop();
        if(p.first==n-1 && p.second==n-1) return ans;
        for(int i=0;i<8;i++){
        int x=p.first+dx[i];
        int y=p.second+dy[i];
        if(x>=0 && y>=0 && x<=n-1 && y<=n-1 && grid[x][y]==0){
        q.push({x,y});
        grid[x][y]=1;
        }
        }
        }
        ans++;
        }
        return -1; 
    }
};