class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        sort(points.begin(), points.end());

    int n = points.size();
    
    int ans = 1;
    int cnt = 1;
    for(int i=1;i<n;i++){
        if(points[i][0] == points[i-1][0]){
            cnt++;
            ans = max(cnt, ans);
        }
        else{
            cnt = 1;
        }
    }
    
    ans = max(ans, cnt);
    
    
    
    for(int i=0;i<n;i++){
        map<double, int> mymap;
        for(int j=0;j<n;j++){
            
            if(points[j][0] == points[i][0]){
                continue;
            }
            
            int y = points[j][1] - points[i][1];
            int x = points[j][0] - points[i][0];
            
            double m = (y * 1.0) / (x * 1.0);
            mymap[m]++;
            
            ans = max(ans, mymap[m] + 1);
        }
        
    }
    
    return ans;
    }
};