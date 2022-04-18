class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
     int arr[amount+1];
        
        arr[0] = 0;
        for (int i = 1; i <= amount; ++i)
            arr[i] = amount+1;
        
        for (const auto & coin: coins){
            if (coin <= amount)
                arr[coin] = 1;
        }
        for (int i = 1; i <= amount; ++i){
            for (const auto & coin: coins){
                if (i - coin >= 0)
                {
                    arr[i] = min(arr[i], 1+arr[i-coin]);
                }
            }
     }
       return (arr[amount] == amount+1)? -1: arr[amount];   
    }
};