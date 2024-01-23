class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore Voting Algorithm (if the majority element is > n/2 then it will always be the majElement since all other elements will eventually become 0).

        // for example the minimum number of times the majority element can come is n/2 + 1 , so other element can be n/2 - 1, hence worse case the count of majority element when traversing will be 1.
        int count = 0, majElement = 0;
        for(auto i: nums){
            if(count==0){
                majElement = i;
            }
            if(i == majElement){
                count++;
            }
            else{
                count--;
            }
        }
        return majElement;
    }
};