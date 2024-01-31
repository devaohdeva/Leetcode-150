class Solution {
private:
    string formatString(string s){
        stringstream ss(s);
        string word;
        string finWord = "";
        while(ss>>word){
            finWord += formatWord(word);
        }
        return finWord;
    }

    string formatWord(string word){
        string formattedWord = "";
        for(int i = 0;i<word.size();i++){
            if(!isalnum(word[i])){
                continue;
            }
            formattedWord += tolower(word[i]);
        }
        return formattedWord;
    }
    
public:
    bool isPalindrome(string s) {
        s = formatString(s);
        if(s==""){
            return true;
        }
        int n = s.size();
        for(int i = 0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                return false;
            }
        }
        return true;
    }
};