class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans ={-1,-1};
        if(nums.size()==0){
            return {-1,-1};
        }
        int left =0,right = nums.size()-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid] == target){
                if(mid == 0){
                    ans [0] =mid;
                    break;
                }
                else{
                    if(nums[mid-1] !=target){
                        ans[0]=mid;
                        break;
                    }
                    else{
                        right =mid-1;
                    }
                }
            }
            else if(nums[mid] <target){
                left=mid+1;
            }
            else{
                right = mid-1;
            }
        }
        
        if(ans[0]==-1){
            return ans;
        }
        if((ans[0]!=nums.size()-1 && nums[ans[0]+1] != target) || ans[0]==nums.size()-1){
            ans[1]= ans[0];
            return ans;
        }
        else {
            left = ans[0]; 
        }
    
        right=nums.size()-1;
        
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid] == target){
                if(mid == nums.size()-1){
                    ans [1] = mid;
                    break;
                }
                else{
                    if(nums[mid+1] != target){
                        ans[1]=mid;
                        break;
                    }
                    else{
                        left=mid+1;
                    }
                }
            }
            else if(nums[mid]<target) {
                left=mid+1;    
            }
            else{
                right =mid-1;
            }
        }

        return ans;

 }
};