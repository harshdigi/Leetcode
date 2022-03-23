class Solution {
public:
    bool isPalindrome(long long int x) {
       long long int y=0;
        long long int num =x;
        while(num>0){
            y = y*10 + num%10;
            num=num/10;
        }
        if(x+y == x*2){
            return true;
        }
        return false;
    }
};