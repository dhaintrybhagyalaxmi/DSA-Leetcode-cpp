/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int k =1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!= nums[k-1]){
                nums[k++]=nums[i];
            }
        }
        return k;
    }
};
// @lc code=end

