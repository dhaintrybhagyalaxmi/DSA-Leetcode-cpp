/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */
#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        vector<string> rows(numRows);

        int currentRow = 0;
        bool goingDown = true;

        for (int i = 0; i < s.length(); i++) {

            rows[currentRow] += s[i];

            if (currentRow == numRows - 1)
                goingDown = false;

            else if (currentRow == 0)
                goingDown = true;

            if (goingDown)
                currentRow++;
            else
                currentRow--;
        }

        string result = "";

        for (int i = 0; i < numRows; i++) {
            result += rows[i];
        }

        return result;
    }
}; 
// @lc code=end

