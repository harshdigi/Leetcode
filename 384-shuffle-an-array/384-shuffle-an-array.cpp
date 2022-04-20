class Solution {
public:
   vector<int>original;
    vector<int>random;
    Solution(vector<int>& nums)
    {
        this->original=nums;
        this->random=nums;
    }
    vector<int> reset()
    {
        return this->original;
    }
    vector<int> shuffle()
    {
        int n=this->original.size();
        for(int i=0;i<n;i++)
        {
            int idx=i+(rand())%(n-i);
            swap(random[i],random[idx]);
        }
        return random;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */