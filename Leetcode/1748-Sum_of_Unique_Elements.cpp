/*
You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.
*/
#include <unordered_map>
#include <vector>
using namespace std;

// Two pass solution
class Solution1 {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, bool> umap;
        int size = nums.size(), sum  = 0;
        for(int i = 0; i < size; i++) {
          if(!umap.count(nums[i])) {
            umap.insert({nums[i], true});
          } else {
            umap[nums[i]] = false;
          }
        }

        for (const auto & [key, value] : umap) {
          sum += value ? key : 0;
        }

        return sum;
    }
};