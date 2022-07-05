class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int numsIndex1 = m-1; //  Index counter for num1 
        int numsIndex2 = n-1; // Index counter for num2
        int currIndex = m+n-1; // Index for complete num1 array for size m+n
        
        // When the num2 array iteration is completed our merge sorted array will be obtained "Note that            we start from back"
        while(numsIndex2>=0){
            // if num1's array iteration not completed we compare elements pf both num1 and num2, then                select the smaller one and insert it into the num1 at currIndex.
            if(numsIndex1 >= 0 && nums1[numsIndex1] > nums2[numsIndex2]){
                nums1[currIndex] = nums1[numsIndex1];
                numsIndex1--;
            }
            else{
                nums1[currIndex] = nums2[numsIndex2];
                numsIndex2--;
            }
            //decrementing currIndex beacuse element till currIndex is correctly merged.
            currIndex--;
        }
        
    }
};