class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];}
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int end=intervals[0][0] ,del=0;
        if(intervals[0][0]<0) end-=2;
        for(auto a:intervals){
            if(a[0]<end) ++del;
            else end=a[1];
        }
        return del;
    }
    
};