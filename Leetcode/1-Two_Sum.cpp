/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/
#include <vector>
#include <unordered_map>
using namespace std;

// Brute Force approach
class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        int length = nums.size();

        for(int i = 0; i < length; i++)
          for(int j = i + 1; j < length; j++)
              if(nums[i] + nums[j] == target)
                {
                  result[0] = i;
                  result[1] = j;
                  return result;
                }
        
        return result;
    }
};

// Hashtable approach
class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        int search = 0;
        unordered_map<int, int> umap;

        for(int i = 0; i < length; i++) {
          search = target - nums[i];
          if(umap.find(search) != umap.end())
          {
            return vector<int>(2) = {umap.at(search), i};
          }
          umap[nums[i]] = i;
        }
              
        return vector<int>(2);
    }
};