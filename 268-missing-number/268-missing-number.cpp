class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int n= nums.size();
        int checksum= (n*(n+1))/2;
        if(sum==checksum){
            return 0;
        }
        
        return checksum-sum;
        
    }
};