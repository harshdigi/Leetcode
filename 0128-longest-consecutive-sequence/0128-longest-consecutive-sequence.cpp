class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 1;

        for (int x : st) {
            if (!st.count(x - 1)) {
                int curr = x;
                int len = 1;

                while (st.count(curr + 1)) {
                    curr++;
                    len++;
                }
                longest = max(longest, len);
            }
        }
        return longest;
    }
};