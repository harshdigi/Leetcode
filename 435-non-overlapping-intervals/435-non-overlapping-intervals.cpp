class Solution {
public:
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end(), [](const vector<int>& v1, const vector<int>& v2) {return v1[0] < v2[0]; });

        int s = 0;
        int j = 0;

        for (int i = 1; i < intervals.size(); ++i)
        {
            if (intervals[j][1] > intervals[i][0]) {
                ++s;
                if (intervals[i][1] > intervals[j][1])
                {
                    continue;
                }
            }
            j = i;
        }
        return s;
    }
    
};