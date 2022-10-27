/*
Given an array arr of integers, check if there exist two indices i and j such that :

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
*/

/* Testcases
[10,2,5,3]
[3,1,7,11]
[-2,0,10,-19,4,6,-8]
[-20,8,-6,-14,0,-19,14,4]
[0,0]
*/

#include <vector>
#include <unordered_set>
using namespace std;

// Single pass hashtable solution
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> uset;
        int size = arr.size();
        for (int num : arr) {
          if(uset.count(2 * num) > 0 || uset.count(num/2) > 0 && (num % 2 != 1)) {
            return true;
          }
          uset.insert(num);
        }

        return false;
    }
};

// O(n)^2 solution
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int size = arr.size();
        for (int i = 0; i < size - 1; i++) {
          for (int j = i + 1; j < size; j++) {
              if(arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i]) {
                return true;
              }
          }
        }

        return false;
    }
};