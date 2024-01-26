class Solution {
private:
    vector<string> breakPathIntoChunks(string path){
        stringstream ss(path);
        string word;
        vector<string> ans;
        while(!ss.eof()){
            getline(ss, word, '/');
            if(word!= ""){
                ans.push_back(word);
            }
        }
        return ans;
    }

    bool shouldPop(string command){
        if(command == ".."){
            return true;
        }
        return false;
    }

public:
    string simplifyPath(string path) {
        /*
            Conditions:
                1. / + "" or / + / = don't push in deque
                2. /.. -> pop the last element if stack not empty
        */

       if(path == "/"){
        return path;
       }

        vector<string> ans = breakPathIntoChunks(path);

        deque <string> simplePath;

        for(auto i: ans){
            if(shouldPop(i)){
                if(!simplePath.empty()){
                    simplePath.pop_back();
                }
            }
            else if(i != "."){
                simplePath.push_back(i);
            }
        }
        string finalAns = "/";
        while(!simplePath.empty()){
            finalAns += simplePath.front();
            simplePath.pop_front();
            if(simplePath.empty()){
                break;
            }
            finalAns += "/";
        }
        return finalAns;
    }
};