class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=-1,j=0;
        if(needle.length()>haystack.length()){
            return -1;
        }
        if(needle.length()==0){
            return 0;
        }
        for(int i=0;i<haystack.length();i++){
            if (j>=needle.size()){
                return index;
            }
            if(haystack[i]== needle[j]){
                if(j==0)
                index =i;
                j++;
            }
            else{
                if(index!=-1){
                    i=index;
                    index=-1;
                    j=0;
                }
            }
        }
        if(j!=needle.size()){
            index=-1;
        }
        return index;
    }
};