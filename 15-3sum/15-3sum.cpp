class Solution {
    
public:     
vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            else{
                int rem=-1*nums[i];
                int p1=i+1;
                int p2=n-1;
                while(p1<p2){
                    int curr=nums[p1]+nums[p2];
                    if(curr>rem)
                        p2--;
                    else if(curr<rem)
                        p1++;
                    else{
                        ans.push_back({nums[i],nums[p1],nums[p2]});
                        if(nums[p1]==nums[p2])
                            break;
                        else{
                            int x=nums[p1];
                            int y=nums[p2];
                            while(nums[p1]==x)
                                p1++;
                            while(nums[p2]==y)
                                p2--;
                        }
                    }
                }
            }
        }
        return ans;
    }
};