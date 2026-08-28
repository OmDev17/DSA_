class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        string temp = "";

        for(char c : path) {

            if(c == '/') {

                if(temp == "..") {
                    if(!stack.empty())
                        stack.pop_back();
                }
                else if(temp != "" && temp != ".") {
                    stack.push_back(temp);
                }

                temp = "";
            }
            else {
                temp += c;
            }
        }

        // Process the last directory
        if(temp == "..") {
            if(!stack.empty())
                stack.pop_back();
        }
        else if(temp != "" && temp != ".") {
            stack.push_back(temp);
        }

        string ans = "";

        for(string s : stack) {
            ans += "/" + s;
        }

        return ans.empty() ? "/" : ans;
    }
};