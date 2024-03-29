class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // dp[i][j]: min cost to reach city j using at most i edges from src
        vector<vector<int>> dp(k + 2, vector<int>(n, INT_MAX));
        // base case
        for (int i = 0; i <= k + 1; i++) dp[i][src] = 0;
        // iterate each stop
        for (int i = 1; i <= k + 1; i++) {
            // iterate each flight
            for (auto f : flights) {
                int from = f[0], to = f[1], cost = f[2];
                // ensure city `from` is reachable 
                if (dp[i - 1][from] != INT_MAX) {
                    // from + cost -> to
                    dp[i][to] = min(dp[i][to], dp[i - 1][from] + cost);   
                }
            }
        }
        // if dp[k + 1][dst] == INT_MAX, it means it is unreachable
        // else return the cost
        return dp[k + 1][dst] == INT_MAX ? -1 : dp[k + 1][dst];
    }
};