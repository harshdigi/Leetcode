class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
        int l=0, r= num.size();
        if(r<2){
            return {};
        }
        r--;
        while(l<=r){
            int mid  = l +(r-l)/2;
            if(num[l]+num[r]== t){
                return {l+1,r+1};
                
            }
            else if (num[mid]>t){
                r=mid;
            }
            else if(num[l]+num[r]<t){
                l++;
            }
            else{
                r--;
            }
        }
        return {};
    }
};