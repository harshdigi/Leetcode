class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0, r=nums.size()-1;
        while(l<=r){
            int mid=  l+(r-l)/2;
            int x = nums.size() - mid;
            if (nums[mid]>=x) {
                if (mid == 0 or nums[mid - 1] < x){
                    return x;
                }
                else{
                    r = mid - 1;
                }
            }
            else{
                l = mid + 1;
                }
        }
        return -1;
    }
};