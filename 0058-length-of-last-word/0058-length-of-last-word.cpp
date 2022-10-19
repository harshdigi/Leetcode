class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length()-1;
        if(s.length() == 0 ){
            return 0;
        }
        if(end == 0 and s[end] != ' '){
            return 1;
        }
        while(s[end] == ' '){
            end--;
        }
        int count = 0;
        while(end>=0 and s[end] != ' '){
            count++;
            end--;
        }
        return count;
    }
};