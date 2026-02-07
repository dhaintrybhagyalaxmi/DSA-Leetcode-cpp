/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxReach = 0;
        for (int i = 0; i < n; i++) {
            if (i > maxReach) {
                return false; // Can't reach this position
            }
            maxReach = max(maxReach, i + nums[i]);
        }
        return true;    
    }
};
// @lc code=end

