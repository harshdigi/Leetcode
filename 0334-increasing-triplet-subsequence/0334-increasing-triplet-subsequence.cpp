class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // if the size of array is less than 3 then there will be no case which statisfy the given condition, Hence we return false
         if (nums.size() < 3) return false;
        
        // consider the i_num to be first smallest element in the given triplet
        int i_num = nums[0];
        // cosider the j_num to be second largest element in the given triplet
        int j_num = INT_MAX;
        
        // iterate over the array to find triplet 
        for (int i = 1; i < nums.size(); ++i)
        {   
            // if we found any element nums[i] which is greater than j_num, so this means we have successfully found the triplet and we return true.
            if (nums[i] > j_num) return true;
            // at start j_num is INT_MAX, so we try to update when we find any element greater than  i_num but smaller than j_num
            if (nums[i] > i_num && nums[i] < j_num)
            {
                j_num = nums[i];
            }
            // update i_num if we find the greater element than i_num
            if (nums[i] < i_num) 
            {
                i_num = nums[i];
            }
        }

        return false; 
    }
};