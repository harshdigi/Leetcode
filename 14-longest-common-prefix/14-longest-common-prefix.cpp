class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string s= "";
        sort(strs.begin(),strs.end());
        string it= strs[0];
        for(int i =0;i<it.length();i++){
            for(int j =1 ;j<strs.size();j++){
                if (it[i]!= strs[j][i]){
                    return s;
                }
                
            }
            s= s+it[i];
        }
        
        return s;
        
    }
};