class Solution {
private:
    void rotateByIndex(vector<int>& nums, int start, int end){
        int n = nums.size();
        int diff = end - start;
        for(int i = 0;i<=diff/2;i++){
            swap(nums[start+i], nums[end-i]);
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>=n){
            k%=n;
        }
        if(k==0){
            return;
        }
        rotateByIndex(nums, n-k, n-1);
        rotateByIndex(nums, 0, n-k-1);
        rotateByIndex(nums, 0, n-1);
    }
};