class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.length() , m = word2.length() ; 
        vector<int> prev( max(n,m) + 1 , 0) , curr( max(n,m) + 1 , 0) ; 
        for (int i = 1 ; i <= n ; i++) {
            for (int j = 1 ; j <= m ; j++) {
                word1[i-1] == word2[j-1] ? curr[j] = 1 + prev[j-1] : curr[j] = max(prev[j],curr[j-1]) ;  
            }
            prev = curr ; 
        }
        int lcs = curr[m] ; 
        return (n + m) - 2*lcs ;  
    }
};