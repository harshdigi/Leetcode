class Solution {
public:
    bool isHappy(int n) {
         set<int>s;
        if(n==1){
            return true;
        }
        while(true){
            int ans=0;
            while(n){
                int temp=n%10;
                ans=ans+(temp*temp);
                n/=10;
            }
            if(ans==1)
                return true;
            else if(s.find(ans)!=s.end())
                return false;
            s.insert(ans);
            n=ans;
        }
        return false;
        
    }
};