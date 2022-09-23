/*
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.
*/
#include <string>
using namespace std;

class Solution1 {
public:
    bool isPalindrome(int x) {
        string xs = to_string(x);
        int size = xs.length();
        int i = 0, j = size - 1;
        int center = size % 2 ?  size / 2 : (size + 1) / 2;
        
        while (i <= center) {
          if(xs[i] != xs[j]) {
            return false;
          }
          i++;
          j--;
        }

        return true;
    }
};