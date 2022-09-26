/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/
#include <vector>
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        int pos;

        while(l <= r) {
          pos = floor((r + l) / 2);
          if(nums[pos] < target) {
            l = pos + 1;
          } else if (nums[pos] > target) {
            r = pos - 1;
          } else {
            return pos;
          }
        }

        return nums[pos] > target ? pos : pos + 1;
    }
};