class Solution {
public:
    int maxArea(vector<int>& arr) {
        int area=INT_MIN;
        int l=0;
        int h=arr.size()-1;
        while(l<h){
            
            area=max(area,(h-l)*min(arr[l],arr[h]));
            if(arr[l]>arr[h]){
                h--;
                
            }
            else if(arr[h]>arr[l])
                l++;
            else
            {
                l++;
                h--;
            }
        }
        return area;
    }
};