class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        
        //leaving last house
        int dp[n-1];
        dp[0]=nums[0];
        dp[1]= nums[1]<nums[0] ? nums[0]:nums[1];
        
        for(int i=2;i<n-1;i++){
            dp[i]= max(dp[i-1],nums[i]+dp[i-2]); 
        }    
		
        //leaving first house
        int dp2[n-1];
        dp2[0]=nums[1];
        dp2[1]=nums[2]<nums[1] ? nums[1]:nums[2];
        for(int i=2;i<n-1;i++){
            dp2[i]= max(dp2[i-1],nums[i+1]+dp2[i-2]);
         }
         int ans=max(dp2[n-2],dp[n-2]);
         return ans;
    }
};