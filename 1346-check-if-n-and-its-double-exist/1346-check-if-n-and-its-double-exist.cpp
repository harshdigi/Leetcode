class Solution {
public:
     bool check(vector<int>& arr,int idx){
        int p = arr[idx] * 2;
        int lo = 0, hi = arr.size() - 1;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(arr[mid] == p && mid != idx)   return true;
            else if(arr[mid] < p){
                lo = mid + 1;
            }else{
                hi = mid - 1;
            }
        }
        return false;
    }
    
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(check(arr,i))    return true;
        }
        return false;
    }
};