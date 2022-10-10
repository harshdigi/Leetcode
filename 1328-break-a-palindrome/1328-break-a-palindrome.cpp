class Solution {
public:
    bool checkPalindrome(string p){
        int i=0, j = p.length()-1;
        while(i<j){
            if(p[i] != p[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string breakPalindrome(string palindrome) {
        if(palindrome.length() == 0 || palindrome.length() == 1 ){
            return "";
        }
        int i;
        for(i =0 ; i<palindrome.length();i++){
            if(palindrome[i] != 'a'){
                string temp = palindrome;
                temp[i] = 'a';
                if(!checkPalindrome(temp)){
                    palindrome[i] = 'a';
                    break;
                }  
            }
        }
        if(i == palindrome.length()){
            palindrome[--i] = 'b';
        }
        return palindrome;
    }
};