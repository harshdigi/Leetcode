class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size()<11) return {};
    unordered_map<string,int> freq;
    vector<string> result;
	
	// 2 lines solution
    for(int i=0;i<=s.size()-10;++i) ++freq[s.substr(i,10)];
    for(auto a:freq) if(a.second>1) result.push_back(a.first);
	
    return result;
    }
};