class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
         int idx[256]={0};
        int m=0,l=0;
        for(int i=0;i<s.length();i++)
        {
            if(idx[s[i]]!=0){
                l=max(idx[s[i]],l);
            }
            idx[s[i]]=i+1;
            m=max(m,i-l+1);
        }
        return m;
        
    }
};