class Solution {
public:
    int firstUniqChar(string s) {
        
        int fq[26];
        int res = -1;
        memset(fq, 0, sizeof(fq));
        for (int i =0;i<s.size();i++){
            
            fq[s[i] - 'a']++;
            
        }
        
        for(int i=0;i<s.size();i++){
            if(fq[s[i]-'a']==1){
                return i;
            }
        }
        
        return -1;
        
    }
};