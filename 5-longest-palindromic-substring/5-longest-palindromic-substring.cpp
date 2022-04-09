class Solution {
public:
        string longestPalindrome(string s)
    {
        int n=s.length();
        bool palindrome[n][n];
        int i,j,k;
        int mx=0,b=-1,e=-1;
        
        for(k=0;k<n;k++)
        {
            for(i=0,j=k;j<n;i++,j++)
            {
                if(k==0)
                    palindrome[i][j]=1;
                else if(k==1)
                    palindrome[i][j]=(s[i]==s[j]);
                else
                    palindrome[i][j]=((s[i]==s[j]) && palindrome[i+1][j-1]);
                
                if(palindrome[i][j] && k+1>mx)
                {
                    mx=k;
                    b=i;
                    e=j;
                }
            }
        }
        
        string ans="";
        for(i=b;i<=e;i++)
            ans+=s[i];
        
        return ans;
    }
};