class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gSum=0, cSum=0;
        int  i=0, N = gas.size();
        while(i<N){
            gSum+=gas[i];
            cSum+=cost[i];
            i++;
        }
        if(gSum<cSum){
            return -1;
            }
        i=0; int rem=0, ans=0;
        while(i<N){
            rem+= gas[i]- cost[i];
            if(rem<0){
                ans=i+1;
                rem=0;
            }
          
            i++;
        }
        return ans;
            
    }
};