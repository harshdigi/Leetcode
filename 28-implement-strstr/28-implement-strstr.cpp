class Solution {
public:
    int strStr(string haystack, string needle) {
    int n = haystack.length();
    int m = needle.length();
     if(m==0){    
         return 0;
     }
     if(m>n){    
         return -1;
     }
     int k = 0;    
     int i = 0;    
     int flag = 0;   
     int index = 0;  
 	
     while(i<n){
         if(haystack[i]==needle[k] and i+m-1<n and haystack[i+m-1] == needle[m-1] and flag== 0 || haystack[i]==needle[k] and flag==1){
             if(flag==0){
                 index = i;
             }
             flag = 1;
             i++;
             k++;
             if(k>=m){
                 return index;
             }
             continue;
         }
     
         if (haystack[i]!=needle[k] and flag==1){
             k=0;
             flag=0;
             i = index+1;
             index = 0;
             continue;
         }
         i++;
     }
     return -1;

    }
};