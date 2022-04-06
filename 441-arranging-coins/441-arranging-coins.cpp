class Solution {
public:
    int arrangeCoins(int n) {
        int ans =0;
        int currentR=1;
        while(currentR<=n){
            n=n-currentR;
            currentR++;
            ans++;
        }
        return ans;
        
    }
};