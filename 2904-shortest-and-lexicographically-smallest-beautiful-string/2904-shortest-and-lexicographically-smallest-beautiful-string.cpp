#include <string>

class Solution {
public:
    std::string shortestBeautifulSubstring(std::string s, int k) {
        int start = 0;
        int count = 0;
        int min_len = s.length() + 1;
        std::string ans = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                count++;
            }
            while (count == k) {
                int current_len = i - start + 1;
                std::string current_str = s.substr(start, current_len);
                if (current_len < min_len || (current_len == min_len && current_str < ans)) {
                    min_len = current_len;
                    ans = current_str;
                }
                if (s[start] == '1') {
                    count--;
                }
                start++;
            }
        }

        return ans;
    }
};