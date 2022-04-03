class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int low = 0;
        long long int high = num;
        long long int sq;
        
        while(low <= high)
        {
            long long int mid = low + (high - low)/2;
            sq = mid*mid;
            if(sq == num)
                return true;
            else if(sq > num)
                high = mid-1;
            else 
                low = mid+1;
        }
        return false;
    }
};