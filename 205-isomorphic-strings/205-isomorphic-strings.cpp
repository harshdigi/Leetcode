class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> prev1, prev2;
        for(int i =0; i<s.length();i++){
            if(prev1.find(s[i]) != prev1.end()){
                if(prev1[s[i]] != t[i]){
                    return false;
                }
            }
            if(prev2.find(t[i]) != prev2.end()){
                if(prev2[t[i]] != s[i]){
                    return false;
                }
            }
            prev1[s[i]] = t[i];
            prev2[t[i]] = s[i];
        }        
      return true;   
    }
};