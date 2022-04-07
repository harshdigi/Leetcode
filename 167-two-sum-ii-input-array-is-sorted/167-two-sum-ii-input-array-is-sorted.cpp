class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
        int l=0, r= num.size()-1;
        vector<int> ans(2,0);
        while(l<=r){
            int mid  = l +(r-l)/2;
            if(num[l]+num[r]== t){
                ans[0]=l+1;
                ans[1]=r+1;
                return ans;
                
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
        return ans;
    }
};