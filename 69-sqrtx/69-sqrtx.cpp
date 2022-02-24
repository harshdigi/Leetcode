class Solution {
public:
    int mySqrt(int x) {
     int lo, hi;
        long long int mid;
        
        lo=1, hi = x;
        while(lo < hi){
            mid = lo+ (hi- lo +1)/2;
            
            if((mid * mid) > x){
                hi = mid - 1;
            }
            else lo = mid;
            
        }
        //sanity check
        if((lo * lo) <= x)    return lo;
        else return 0;
    
    }
};