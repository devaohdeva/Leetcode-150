class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(auto i: ransomNote){
            mp[i]++;
        }

        for(int i = 0;i<magazine.size();i++){
            char currentChar = magazine[i];
            if(mp.find(currentChar)==mp.end()){
                continue;
            }
            mp[currentChar]--;
            if(mp[currentChar] == 0){
                mp.erase(currentChar);
            }
        }

        return mp.empty();
    }
};