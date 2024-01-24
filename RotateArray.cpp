class Solution {
public:

    void reverseArrayBasedOnIndex(vector<int> &nums,int start, int end){
        reverse(nums.begin()+start, nums.begin()+end);
    }
    void rotate(vector<int>& nums, int k) {
        // 4, 3, 2, 1, 7, 6, 5
        // 7, 6, 5, 4, 3, 2, 1
        reverseArrayBasedOnIndex(nums, k+1, k+3);
    }
};