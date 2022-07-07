class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> prev1, prev2; // prev1 map character of string s with t and prev2 map character of string t with string s 
        // iterate the strings
        for(int i =0; i<s.length();i++){
            // if s[i] character is no present we check that character is correcty mapped and follow the pattern
            if(prev1.find(s[i]) != prev1.end()){
                if(prev1[s[i]] != t[i]){
                    return false;
                }
            }
            // if t[i] character is no present we check that character is correcty mapped and follow the pattern
            if(prev2.find(t[i]) != prev2.end()){
                if(prev2[t[i]] != s[i]){
                    return false;
                }
            }
            // if characters are not yet inserted in both map we insert them in map 
            prev1[s[i]] = t[i];
            prev2[t[i]] = s[i];
        }        
      return true;   
    }
};