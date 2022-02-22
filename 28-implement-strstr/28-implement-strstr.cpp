class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=-1,j=0;
        int hL=haystack.length(),nL= needle.length();
        if(nL>hL){
            return -1;
        }
        if(nL==0){
            return 0;
        }
        for(int i=0;i<hL;i++){
            
            if (j>=nL){
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
        if(j!=nL){
            index=-1;
        }
        return index;
    }
};