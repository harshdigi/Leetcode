class Solution {
public:
    bool isPerfectSquare(int num) {
        double y=pow(num,0.5);
        if(fmod(num,y)==0){
            return true;
        }
        return false;
    }
};