/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;  int right = height.size() - 1;
        int max_area = 0;
        while (left < right) {
            int current_area = min(height[left], height[right]) * (right - left);
            max_area = max(max_area, current_area);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max_area;
    }
};
// @lc code=end

