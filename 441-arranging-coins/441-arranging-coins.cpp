class Solution {
public:
    int arrangeCoins(int n) {
      
        
        if(n==1){
            return 1;
        }
        long long int left =0, right = n-1,mid,val;
        while(left<=right){
            mid = left+(right-left)/2;
            val = mid*(mid+1)/2; // AP sum of n consecutive number 1,2,3,4,5....n = (n*(n+1))/2
            if(val==n){
                return mid;
            }
            else if(val>n){
                right =mid-1;
            }
            else{
                left = mid+1;
            }
        }
        
        return right;
        
           
        
    }
};