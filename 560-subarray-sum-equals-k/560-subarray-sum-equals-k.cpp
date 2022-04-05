class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
int count=0;
unordered_map<int, int> m;

    int curr_sum=0;
    for(int i=0; i<n; i++)
    {
        curr_sum += nums[i];
        if(curr_sum==k)
        {
            count++;
        }
        if(m.find(curr_sum-k)!=m.end())
        {
            count = count+ m[curr_sum-k];
        }
        m[curr_sum]++;
        
    }
    return count;

    }
};