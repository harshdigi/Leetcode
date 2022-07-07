class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0; // i stores the current index of stirng 's' and j stores the current index of string t 
        // iterate the string till i is less than length of string s and j is less than the string t
        while(i<s.length() && j<t.length()){
            // if s[i] is equal to t[j] then we increment  i 
            // if condition is not met then we simply implement only j
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }
        // if i becomes greater than length of string s this means subsequence is present else we return false 
        if(i>=s.length()){
            return true;
        }
        return false;
    }
};