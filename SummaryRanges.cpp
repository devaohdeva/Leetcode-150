/*
Time Complexity -> O(N)
Space Complexity -> O(1)
Beats 100% solutions
*/

class Solution {
private:
    string convertIntToString(int a){
        return to_string(a);
    }
    bool shouldMoveForward(int current, int next){
        if(next == current+1){
            return true;
        }
        return false;
    }
    string storeRange(int start, int end){
        // while storing check if start and end are same,if yes save the same element else create a "->" string
        if(start == end){
            return convertIntToString(start);
        }
        else{
            return convertIntToString(start) + "->" + convertIntToString(end);
        }
    }
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();

        // edge cases
        if(n==0){
            return {};
        }
        if(n==1){
            return {convertIntToString(nums[0])};
        }

        int start = nums[0];
        int end = start;
        vector<string> resultOfSummaryResponse;

        for(int i = 1; i < n;i++){
            if(shouldMoveForward(end, nums[i])){
                // if the next element is +1 keep increasing end
                end++;
            }
            else{ 
                // else save the value of current start and end
                resultOfSummaryResponse.push_back(storeRange(start, end));
                start = nums[i];
                end = start;
            }
        }
        // last result needs to be pushed as well
        resultOfSummaryResponse.push_back(storeRange(start, end));
        return resultOfSummaryResponse;
    }
};