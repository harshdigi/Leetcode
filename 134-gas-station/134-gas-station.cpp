class Solution {
public:
    int canCompleteCircuit(vector<int>& A, vector<int>& B) {
         int front = 0, end = 0;

    int N = A.size();

    long s1 = 0, s2 = 0;

    bool endGoneAround = false;

    while (true){

        end++;

        if (end == N){

            end=0;

            endGoneAround = true;

        }

        int endMinus1 = (end==0) ? N-1: end-1;

        s1+=A[endMinus1];

        s2+=B[endMinus1];

        while (s2>s1 && front!= N){

            front++;

            s1 -= A[front-1];

            s2 -= B[front-1];

        }

        if (front == end && endGoneAround){

            return front;

        }

        if (front == N) return -1;

    }

    return -1;


    }
};