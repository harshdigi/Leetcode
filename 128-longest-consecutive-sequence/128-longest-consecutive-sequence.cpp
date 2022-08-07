class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int count=1;
        set<int> s;
        if(nums.size() ==0 ){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int ans=1;
        
        for(auto it = ++s.begin(); it != s.end(); it++){
            auto it1 = it;
            --it1;
            if( *it1 + 1   == *it ){
                count++;
            }
            else{
                if(count > ans){
                    ans = count;
                }
                count =1;
            }
        }
       return count>ans? count:ans;  
    }
};