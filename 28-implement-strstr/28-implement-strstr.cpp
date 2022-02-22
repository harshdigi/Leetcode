class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=-1,j=0,i=0;
        int hL=haystack.length(),nL= needle.length();
        if(nL>hL){
            return -1;
        }
        if(nL==0){
            return 0;
        }
        while(i<hL){
           
            if(haystack[i]== needle[j]){
                if(j==0){
                    index =i;
                }
                j++;
                i++;
                if (j==nL){
                return index;}
            }
            else if(index!=-1){
                i=index+1;
                index=-1;
                j=0;
            }
            else if(index==-1 and nL>hL-i ){
                        break;
            }
           
            else{
                i++;
            }
            
            
        }
        return -1;
    }
};