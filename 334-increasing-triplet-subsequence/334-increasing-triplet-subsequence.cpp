class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
         if (nums.size() < 3) return false;
  
        int i_num = nums[0];
        int j_num = INT_MAX;

        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] > j_num) return true;
            
            if (nums[i] > i_num && nums[i] < j_num)
            {
                j_num = nums[i];
            }
            
            if (nums[i] < i_num) 
            {
                i_num = nums[i];
            }
        }

        return false;
    }
};