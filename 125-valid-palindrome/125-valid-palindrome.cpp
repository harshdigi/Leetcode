class Solution {
public:
    bool isPalindrome(string s) {
      int low=0,high=s.length()-1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        while(low<high){
            if( !((s[low] >=97 && s[low]<=122) || (s[low] >=48 && s[low]<=57)) ){
                low++;
            }
            else if( !( (s[high] >=97 && s[high]<=122) || (s[high] >=48 && s[high]<=57) ) ){
                high--;
            }
            
            else if(s[low]== s[high]){
                high--;
                low++;
            }
            else{
                return false;
            }
            
            
        }
        return true;
    }
};