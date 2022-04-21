class Solution {
public:
    static bool comparator(vector<int> &a, vector<int> &b) {
        double x = sqrt(a[0]*a[0] + a[1]*a[1]);
        double y = sqrt(b[0]*b[0] + b[1]*b[1]);
        if(x < y) return true;
        return false;
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(), points.end(), comparator);
        return vector<vector<int>> (points.begin(), points.begin()+k);
    } 
};