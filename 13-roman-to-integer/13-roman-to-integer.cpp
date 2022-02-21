class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int> mymap;
        mymap['I'] =1;
        mymap['V'] = 5;
        mymap['X'] = 10;
        mymap['L'] = 50;
        mymap['C'] = 100;
        mymap['D'] = 500;
        mymap['M'] = 1000;
        
        int ans=0;
        if(s.length()==1){
            return mymap[s[0]];
        }
        for(int i=s.length()-1;i>0;i--){
            if(mymap[s[i]]<=mymap[s[i-1]]){
                ans= ans+ mymap[s[i]];
            }
            else{
                ans = ans+mymap[s[i]]-mymap[s[i-1]];
                i--;
            }
        }
        if(mymap[s[0]]>=mymap[s[1]]){
            ans=ans+mymap[s[0]];
        }
        return ans;
        
    }
};