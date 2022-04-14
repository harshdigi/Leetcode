class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char ,int>> st; 
        string ans = "";
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == ')' || s[i] == '('){
                if(st.size() > 0 && st.top().first == '(' && s[i] == ')'){
                    st.pop();
                }else st.push({s[i], i});
            }
        }
        
        for(int i = s.size()-1; i>=0; i--) {
            if(st.size()>0 && st.top().second == i){
                st.pop();
                continue;
            }else ans += s[i];
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    
    }
};