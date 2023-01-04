class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
       unordered_map<int,int> fq;
        int count=0;
        for(int i : tasks){
            fq[i]++;
        }
        for(auto item : fq){
            int i = item.second;
            if(i == 1){
                return -1;
            }   
            if(i%3==0){
                count+= i/3;
            }
            else{
                count += i/3;
                count++;
            }

        }
        return count;
}
};