/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0; // No jumps needed if there's one or no elements  
        int jumps = 0;
        int currentEnd = 0; // The farthest we can reach with the current number of jumps
        int farthest = 0; // The farthest we can reach with the next jump
        for (int i = 0; i < n - 1; i++) {
            farthest = max(farthest, i + nums[i]);
            if (i == currentEnd) { // We have reached the end of the current jump
                jumps++;
                currentEnd = farthest; // Move to the farthest we can reach with the next jump
                if (currentEnd >= n - 1) break; // If we can reach or exceed the last index, break
            }
        }
        return jumps;
    }
};
// @lc code=end

