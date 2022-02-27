class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1 || n==0) return n;
        
        int prev =nums[0];
        int count=1;
        for(int i=1;i<n;i++){
            
            if(nums[i]!=prev){
                prev= nums[i];
                nums[count] = nums[i];
                count++;
            }
        }
        
        return count;
        
        
    }
};