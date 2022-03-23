class Solution {
public:
    bool isPalindrome(int x) {
       long long int y=0;
        long long int num =x;
           if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        while(num>0){
            y = y*10 + num%10;
            num=num/10;
        }
        if(x==y){
            return true;
        }
        return false;
    }
};