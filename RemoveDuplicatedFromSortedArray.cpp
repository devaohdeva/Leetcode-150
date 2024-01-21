/*
Time Complexity -> O(N)
Space Complexity -> O(K) where K is the count of distinct elements  
Beats 7% solutions
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s;
        s.insert(nums[0]);
        auto it = ++nums.begin();
        while(it!=nums.end()){
            if(s.find(*it)!=s.end()){
                nums.erase(it);
                it--;
            }
            else{
                s.insert(*it);
            }
            it++;
        }
        return nums.size();
    }
};