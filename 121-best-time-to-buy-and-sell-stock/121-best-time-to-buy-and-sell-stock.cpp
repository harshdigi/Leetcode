class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = INT_MAX;
        int res=0;
        for(int i=0;i<n;i++){
           mini = min(mini, prices[i]);
            int temp = prices[i]-mini;
            res = max(res, temp);
        }
        return res;
    }
};