class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mymap;
        for(int i : nums){
            
            mymap[i]++;
            if(mymap[i]>nums.size()/2)return i;
            
        }
        
        return 0;
    }
};