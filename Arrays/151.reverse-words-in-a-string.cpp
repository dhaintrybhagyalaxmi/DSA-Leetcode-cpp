/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */
#include<string>
using namespace std;
// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int n = s.length();
        int i = n - 1;

        while (i >= 0) {
            // Step 1: Skip spaces
            while (i >= 0 && s[i] == ' ')
                i--;

            if (i < 0) break;

            int j = i;

            // Step 2: Find word start
            while (i >= 0 && s[i] != ' ')
                i--;

            // Step 3: Add word
            if (result != "")
                result += " ";

            result += s.substr(i + 1, j - i);
        }

        return result;
    }
};
// @lc code=end

