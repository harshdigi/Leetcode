class Solution {
public:
    bool isPowerOfThree(int n) {
        long long int val= 3;
        if(n ==1){
            return true;
        }
        while(val<=n){
            if(val == n){
                return true;
            }
            val = val*3;
        }
        return false;
    }
};