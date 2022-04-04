class Solution {
public:
    bool backspaceCompare(string s, string t) {
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'&&i>0){
                s.erase(i-1,2);//erase '#'and it's pre char
                i=i-2; //shift index by 2
            }
            if(s[0]=='#')s.erase(0,1); //when '#' at index 0;
        }
		
        for(int i=0;i<t.size();i++){
            if(t[i]=='#'&&i>0){
                t.erase(i-1,2);
                 i=i-2;
            }
            if(t[0]=='#')t.erase(0,1);
        }
        
        if(s.size()!=t.size())return false;
        for(int i=0;i<t.size();i++){
            if(s[i]!=t[i])return false;
        }
        return true;
            
    }
};