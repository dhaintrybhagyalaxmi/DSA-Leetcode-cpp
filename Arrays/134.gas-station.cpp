/*
 * @lc app=leetcode id=134 lang=cpp
 *
 * [134] Gas Station
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0, tank = 0 , start = 0;
        for (int i = 0; i < gas.size(); ++i) {
            total += gas[i] - cost[i];
        }
        if (total < 0) {
            return -1;
        }
        for (int i = 0; i < gas.size(); ++i) {
            tank += gas[i] - cost[i];
            if (tank < 0) {
                start = i + 1;
                tank = 0;
            }
        }
        return start;
       
    }
};
// @lc code=end

