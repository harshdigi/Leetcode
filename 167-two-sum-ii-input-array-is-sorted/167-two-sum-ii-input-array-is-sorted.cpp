class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
        int l=0, r= num.size()-1;
        vector<int> ans;
        while(l<=r){
            int mid  = l +(r-l)/2;
            int sum = num[l]+num[r];
            if(sum == t){
                ans.push_back(l+1);
                ans.push_back(r+1);
                return ans;
                
            }
            else if (num[mid]>t){
                r=mid;
            }
            else if(sum<t){
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
    }
};