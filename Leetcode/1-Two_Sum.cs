/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

// Brute Force option
public class Solution1 {
    public int[] TwoSum(int[] nums, int target) {
      for (int num1 = 0; num1 < nums.Length; num1++) {
        for (int num2 = num1 + 1; num2 < nums.Length; num2++) {
          if((nums[num1] + nums[num2]) == target)
            return new int[] {num1, num2};
        }
      }
      return new int[] {-1, -1};
    }
}

// Hashtable approach
public class Solution2 {
    public int[] TwoSum(int[] nums, int target) {
        Hashtable map = new Hashtable();
        for (int i = 0; i < nums.Length; i++) {
          int search = target - nums[i]
          if(map.ContainsKey(search))
          {
            return new int[] {map[search], i}
          }
          map.Add(nums[i], i);
        }

        return null;
    }
}