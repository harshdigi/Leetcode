class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> m;
        for(int i=0; i<s.size(); i++){
            m[s[i]] = i;
        }
        int maxi =0;
        int prev =-1;
        vector<int> v;
        for(int i=0; i<s.size(); i++){
            maxi = max(maxi, m[s[i]]);
            if(i== maxi){
                v.push_back(maxi-prev);
                prev = maxi;
            }
        }
        return v; 
    }
};