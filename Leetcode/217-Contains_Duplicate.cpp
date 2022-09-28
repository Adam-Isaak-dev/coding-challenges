/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        int size = nums.size();
        
        for(int i = 0; i < size; i++) {
          if(us.count(nums[i])) {
            return true;
          }
          us.insert(nums[i]);
        }

        return false;
    }
};