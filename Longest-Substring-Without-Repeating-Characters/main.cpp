#include <iostream>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int freq[256] = {0};
        int l = 0, r = -1; // [l, r]
        int res = 0;
        while (l < s.size()) {
            if (r + 1 < s.size() && freq[s[r + 1]] == 0) {
                r ++;
                freq[s[r]] ++;
            } else {
                freq[s[l]] --;
                l ++;
            }
            res = max (res, r - l + 1);
        }
        return res;
    }
};

int main() {
    string s1 = "bbbbb";
    cout << Solution().lengthOfLongestSubstring(s1) << endl;
    return 0;
}