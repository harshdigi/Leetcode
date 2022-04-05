class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
      int ans=0;
        int pro=nums[0];
        int i=1,j=0;
        
        for(auto x:nums){
            if(x<k){ans++;}
        }
        
        while(i<nums.size()){
            pro*=nums[i];
            while(pro>=k and j<i-1){ 
                pro/=nums[j++];
            }
            if(pro<k){ans+=i-j;} 
            i++;
        }
        return ans;
    }
};