class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> prevS, prevT;
        for(int i =0 ;i<s.length();i++){
            int a = s[i];
            int b= t[i];
            if(prevS[a] !=0){
                if(b != t[prevS[a] -1 ]){
                    return false;
                }
            }
            else if(prevT[b]!=0){
                if(a != s[prevT[b]-1]){
                    return false;
                }
            }
            prevS[a] =i+1;
            prevT[b] = i+1;
        }
        
      return true;  
    }
};