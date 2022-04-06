class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int currMissing=0, left=0, right = arr.size()-1;
        
        if(right+1==arr[right]){
            return arr[right]+k;}
        while(left<=right){
            int mid = left + (right-left)/2;
            currMissing = arr[mid] -mid-1;
            if(currMissing>=k){
                right=mid-1;
            }
            else{
                left= mid+1;
            }
            
        }
        return k+left;
    }
};