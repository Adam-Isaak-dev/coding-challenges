/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.
*/

#include <vector>
using namespace std;

// Single Pass - one pointer 
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, count = 0;

        for(int  i = 0; i < nums.size(); i++) {
          if(nums[i]) {
            count++;
          } else {
            if(count > max) {
              max = count;
            }

            count = 0;
          }
        }

        if(count > max) {
          max = count;
        }

        return max;
    }
};
