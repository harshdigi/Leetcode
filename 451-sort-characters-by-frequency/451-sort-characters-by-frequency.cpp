class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
priority_queue<pair<int,char>>p;

    for(int i=0;i<s.size();i++) m[s[i]]++;
    
    for(auto x:m) p.push({x.second,x.first});
    
    string ans="";
    
    while(p.size())
    {
        int x=p.top().first;
        while(x--) ans+=p.top().second;
        p.pop();
    }
    return ans;  
    }
};