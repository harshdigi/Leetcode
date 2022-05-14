class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gSum=0, cSum=0;
        int  i=0, N = gas.size();
      int rem=0, ans=0;
        while(i<N){
            gSum+=gas[i];
            cSum+=cost[i];
            rem+= gas[i]- cost[i];
            if(rem<0){
                ans=i+1;
                rem=0;
            }
          
            i++;
        }
        return  gSum>=cSum?ans:-1;
            
    }
};