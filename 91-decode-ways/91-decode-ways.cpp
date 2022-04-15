class Solution {
public:
  int solve(string &s,int i,vector<int>&dp){
        if(i==s.size()-1) return (s[i] > '0') ? 1 : 0 ;
        if(i>=s.size()) return 1;
        
        if(dp[i]!=-1) return dp[i];
        
        if(s[i]=='0') return 0;
        int l = solve(s,i+1,dp);
        
        string h ;
        h+=s[i];
        h+=s[i+1];
        
        int r = 0;
        if(h<="26"){
            r = solve(s,i+2,dp);
        }
        return dp[i]= l + r;
    }
    int numDecodings(string s) {
        vector<int>dp(s.size(),-1);
        return solve(s,0,dp);
    }
};