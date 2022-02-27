class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
      int size = nums.size();
        vector<int> ans;
        unordered_map<int, int> isavailable;
        for(int i =0;i<nums.size();i++){
            int nextValue = target-nums[i];
            auto findValue = isavailable.find(nextValue);
            if(findValue!= isavailable.end()){
                int insertValue = isavailable.at(nextValue)-1;
                ans.push_back(insertValue);
                ans.push_back(i);
                
            }
            else{
                isavailable[nums[i]]= i+1;
            }
        }
        return ans;
        
    }
};