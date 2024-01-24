class Solution {
public:
    int lengthOfLastWord(string s) {
        // using string stream it automatically removes all the spaces and keeps inserting words
        int count = 0;
        string word;
        istringstream ss(s);

        while(ss >> word);
        return word.size();
    }
};