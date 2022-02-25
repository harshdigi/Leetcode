class Solution {
public:
    bool isPalindrome(string s) {
      int low=0,high=s.length()-1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        while(low<high){
            if( !((s[low] >='a' && s[low]<='z') || (s[low] >='0' && s[low]<='9')) ){
                low++;
            }
            else if( !( (s[high] >='a' && s[high]<='z') || (s[high] >='0' && s[high]<='9')) ) 
            {
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