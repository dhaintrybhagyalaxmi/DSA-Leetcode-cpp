/*
 * @lc app=leetcode id=274 lang=cpp
 *
 * [274] H-Index
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> count(n + 1, 0);
        for (int citation : citations) {
            count[min(citation, n)]++;
        }
        int total = 0;
        for (int i = n; i >= 0; i--) {
            total += count[i];
            if (total >= i) {
                return i;
            }
        }
        return 0;
    }
};
// @lc code=end

