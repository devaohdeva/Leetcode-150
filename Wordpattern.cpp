class Solution {
public:
    bool wordPattern(string pat, string s) {
        stringstream ss(s);
        string word;
        unordered_map<string, char> mp;
        int c = 0;
        unordered_set<char> used;
        while(ss>>word){
            if(c>= pat.size()){
                return false;
            }
            if(mp.find(word)!=mp.end()){
                if(pat[c]!=mp[word]){
                    return false;
                }
            }
            else if(used.find(pat[c])!=used.end()){
                return false;
            }
            else{
                mp[word] = pat[c];
                used.insert(pat[c]);
            }
            c++;
        }
        if(c<pat.size()){
            return false;
        }
        return true;
    }
};