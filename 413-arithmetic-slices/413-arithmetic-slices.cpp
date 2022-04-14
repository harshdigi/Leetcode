class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
         vector<int> dp(nums.size()+1,0);
        dp[0]=0;
        dp[1]=0;
        int ans=0;
        for(int i=2;i<nums.size();i++){
            int a=nums[i]-nums[i-1];
            int b=nums[i-1]-nums[i-2];
            if(a==b){
                dp[i]=1+dp[i-1];
                ans+=dp[i];
            }
        }
        return ans;
    }
};