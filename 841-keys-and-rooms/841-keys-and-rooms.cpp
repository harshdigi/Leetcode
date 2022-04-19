class Solution {
public:
     void func(vector<vector<int>>& rooms, bool *vis, int node){
        queue<int>qu;
        qu.push(node);
        vis[node] = true;
        
        while(qu.empty() == false){
            int ele = qu.front();
            qu.pop();
            
            for(int x: rooms[ele]){
                if(!vis[x]){
                    qu.push(x);
                    vis[x] = true;
                }
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        bool vis[rooms.size()];
        fill(vis, vis+rooms.size(), false);
        
        func(rooms, vis, 0);
        
        for(int i = 0; i<rooms.size(); i++){
            if(!vis[i])return false;
        }
        
        return true;
    }
};