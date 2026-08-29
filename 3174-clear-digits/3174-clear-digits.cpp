class Solution {
public:
    string clearDigits(string s) {
        vector<char> stack;

        for(int i = 0; i < s.length(); i++) {
            if (!(s[i] - '0' >= 0 && s[i] - '0' <= 9)) {
                stack.push_back(s[i]);
            }
            else {
                stack.pop_back();
            }
        }

        return string(stack.begin(), stack.end());
    }
};