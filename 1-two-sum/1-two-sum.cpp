class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> isavailable;
        for(int i =0;i<nums.size();i++){
            auto findValue = isavailable.find(target-nums[i]);
            if(findValue!= isavailable.end()){
                int insertValue = isavailable.at(target-nums[i])-1;
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