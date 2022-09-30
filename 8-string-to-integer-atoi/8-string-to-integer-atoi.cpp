class Solution {
public:
    int myAtoi(string s) {
        long long int num = 0;
        bool neg = false;
        int i=0;
        while(s[i] == ' '){
            i++;
        }
        if(s[i] != '+' and s[i] != '-' and  !isdigit(s[i])){
            return num;
        }
        if(s[i] == '-'){
            neg = true;
            i++;
        }
        else if(s[i] == '+'){
            i++;
        }
        for(;i<s.length();i++){
            if(isdigit(s[i])){
                int digit = s[i] - '0';
                num  = (num * 10)+digit;
                  if (neg and num >INT_MAX){
                    return INT_MIN;
                }
                else if(num > INT_MAX){
                    return INT_MAX;
                }
            }
            else{
               break;
            }
        }
        
        if(neg){
            return num * -1;
        }
        return num;
    }
};