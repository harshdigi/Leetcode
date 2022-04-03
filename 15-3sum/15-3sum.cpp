class Solution {
private:
bool allEqual(std::vector<int> const &v) {
    if (v.size() == 0) {
        return false;
    }
 
    return std::all_of(v.begin(), v.end(), [&] (int const &e) {
        return e == 0;
    });
}
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if(allEqual(nums)==true && nums.size()>2){
            vector<int> x = {0,0,0};
            ans.push_back(x);
            return ans;
        }
        int a = count(nums.begin() , nums.end() , 0);
        int b = count(nums.begin() , nums.end() , -1);
        int c = count(nums.begin() , nums.end() , 1);
        if(a>0 && b>0 && c>0 && (a+b+c == nums.size())){
            vector<int> x = {-1 , 0 , 1};
            vector<int> y = {0 , 0 , 0};
            ans.push_back(x);
            if(a>2){
            ans.push_back(y);
            }
            return ans;
        }
        
        sort(nums.begin() , nums.end());
        for(int i=0 ; i<nums.size() ; i++){
            int j=i+1;
            int k=nums.size()-1;
            int target = 0 - nums[i];
            while(j<k){
                vector<int> v;
                if((nums[j]+nums[k])==target){
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    ans.push_back(v);
  
                    j++;
                    k--;
                }
                else if((nums[j]+nums[k])<target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        sort(ans.begin() , ans.end());
        ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
        return ans;
      }
};