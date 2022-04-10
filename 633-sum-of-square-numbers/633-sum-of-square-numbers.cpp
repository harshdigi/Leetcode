class Solution {
public:
    bool judgeSquareSum(int c) {
       if(c == 0) {return true;}
        long long int start = 0, end = sqrt(c);
        
        while(start <= end){
            long long int sum = start * start + end * end;
            if(sum == c){ return true;}
            else if(sum > c){ end--;}
            else {start++;}
        }
        
        return false; 
    }
};