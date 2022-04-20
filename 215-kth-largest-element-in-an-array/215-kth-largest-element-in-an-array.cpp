class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        
        for (auto& x : nums){
            pq.push(x);}
        
        int ans = 0;
        
        while (k--) {
            ans = pq.top();
            pq.pop();
        }
        
        return ans;
    }
};