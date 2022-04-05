class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> startend(n);
        vector<int> lastend(n);
        vector<int> ans;
        if(n==0)
        {
            return ans;
        }
        startend[0]=1;
        lastend[0]=1;
        for(int i=1;i<n;i++)
        {
            startend[i]=startend[i-1]*nums[i-1];
            lastend[i]=lastend[i-1]*nums[n-i];
        }
        
        for(int i=0;i<n;i++)
        {
            ans.push_back(startend[i]*lastend[n-i-1]);
        }
        
        return ans;
    }
};