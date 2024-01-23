// /*
//     O(N) -> Time Complexity
//     O(1) -> Space Complexity
//      this solution quite literally does what its supposed to do...
// */

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int currentNum = nums[0], currentNumFreq = 1;
//         for(auto it = ++nums.begin();it!=nums.end();it++){
//             if(currentNum == *it){
//                 currentNumFreq++;
//                 if(currentNumFreq>2){
//                     nums.erase(it);
//                     it--;
//                     currentNumFreq--;
//                 }
//             }
//             else{
//                 currentNum = *it;
//                 currentNumFreq = 1;
//             }
//         }
//         return nums.size();
//     }
// };

/*
    O(N) -> Time Complexity
    O(1) -> Space Complexity
    Better Solution
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2){
            return nums.size();
        }
        int k = 2; // this will represent final size of the array and first 2 elements filled already

        for(int i = 2;i<nums.size();i++){
            if(nums[i] != nums[k-2]){ // checks if the current element is equal to i-2 element of the newly made array.
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};