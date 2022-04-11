class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
      int max_dis = 0;
        for (int i = 0; i < nums1.size(); ++i) {
            if (max_dis > nums2.size()-1-i) 
            {
                break;
            }
            int left = i, right = nums2.size()-1;
            while (left <= right) {
                int mid = (left + right) / 2;
                if (nums1[i] > nums2[mid]) {
                    right = mid - 1;
                } 
                else {
                    max_dis = max(max_dis, mid-i);
                    left = mid + 1;
                }
            }
        }
        return max_dis;  
    }
};