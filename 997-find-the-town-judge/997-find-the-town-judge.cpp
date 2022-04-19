class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
          if(n == 1) {
              return 1;}
        vector<int> temp(n+1,0);
        for(int i=0; i<trust.size(); i++){
            temp[trust[i][0]]--; 
            temp[trust[i][1]]++; 
        }
        
        int ans = 0;
        for(int i=0; i<temp.size(); i++){
            if (temp[i] == n-1) {return i;}
        }
        return -1;
        
    }
};