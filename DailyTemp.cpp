/*
Intuition: This is similar to NGE problem where we have to find the next greater element in the array and store its index
*/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>> s;
        vector<int> ans(temp.size(),0);
        s.push({temp[0],0});
        for(int i = 1;i<temp.size();i++){
            while(!s.empty() && temp[i] > s.top().first ){
                ans[s.top().second] = i - s.top().second;
                s.pop();
            }
            s.push({temp[i], i});
        }

        while(!s.empty()){
            ans[s.top().second] = 0;
            s.pop();
        }

        return ans;
    }
};