class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
       
        int n = nums.size();
        vector<int> len(n, 1), cnt(n, 1);
        int maxLength = 0, count = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(nums[j] < nums[i]) {
                    if(len[i] == len[j] + 1) cnt[i] += cnt[j];
                    else if(len[j] + 1 > len[i]) {
                        // Extend.
                        len[i] = len[j] + 1;
                        cnt[i] = cnt[j];
                    }
                }
            }
            
            if(maxLength == len[i])
                count += cnt[i];
            else if(maxLength < len[i]) {
                maxLength = len[i];
                count = cnt[i];
            } 
            
        }
        
        return count;
      
    }
};