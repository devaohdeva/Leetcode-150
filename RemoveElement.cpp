/*
Time Complexity -> O(N)
Space Complexity -> O(1)
Beats 100% solutions
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto it = nums.begin();
        while(it!= nums.end()){
            if(*it == val){
                nums.erase(it);
                it--;
            }
            it++;
        }
        return nums.size();
    }
};