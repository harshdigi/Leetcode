class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count=0;
        for(int i:costs){
            if(coins>=i){
                coins-=i;
                count++;
            }else{
                return count;
            }
        }
        return count;
    }
};