class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> prevS, prevT;
        
        for(int i =0 ;i<s.length();i++){
            if(prevS[s[i]] !=0){
                if(t[i] != t[prevS[s[i]] -1 ]){
                    return false;
                }
            }
            else if(prevT[t[i]]!=0){
                if(s[i] != s[prevT[t[i]]]-1){
                    return false;
                }
            }
            prevS[s[i]] =i+1;
            prevT[t[i]] = i+1;
        }
        
      return true;  
    }
};