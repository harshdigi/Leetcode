class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
         int sizeS = s.length();
        int sizeP = p.length();
        
        vector<int> ans;
        if(sizeP>sizeS){return ans;}
        vector<int> hashS(26,0);
        vector<int> hashP(26,0);
        
        for(int i=0;i<sizeP;i++){
            hashS[s[i] - 'a']++;
            hashP[p[i] - 'a']++;
        }
        
        int i=0;
        if(hashS==hashP){
            ans.push_back(0);
        }
        for(int j=sizeP;j<sizeS;){
            hashS[s[j]-'a']++;
            hashS[s[i]-'a']--;
            i++;
            j++;
            
            if(hashS==hashP){
                ans.push_back(i);
            }
           
            
        }
        return ans;
    }
};