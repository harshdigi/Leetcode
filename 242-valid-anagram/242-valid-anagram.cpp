class Solution {
public:
    bool isAnagram(string s, string t) {
       int arr[256];
        memset(arr,0, sizeof(arr));
        if(s.length()!= t.length())return false;
        for(int i=0;i<s.length();i++){
            arr[s[i]]++;
        }
         for(int i=0;i<t.length();i++){
            arr[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }
};