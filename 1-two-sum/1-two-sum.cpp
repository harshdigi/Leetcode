class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int size = nums.size();
        unordered_map<int, int> isavailable;
        for(int i =0;i<nums.size();i++){
            int nextValue = target-nums[i];
            if(isavailable.find(nextValue) != isavailable.end()){  
                return {isavailable.at(nextValue)-1,i};
                
            }
                isavailable[nums[i]]= i+1;

        }
        return {};
        
    }
};