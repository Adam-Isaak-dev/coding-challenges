/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
*/

// Typical recursive implementation
class Solution {
public:
    int addDigits(int num) {
        if(num <= 9) {
          return num;
        } else {
          int sum = 0;
          do {
              sum += num % 10;
              num /= 10;
          } while (num >= 1);
          return addDigits(sum);
        }
    }
};

// Without loops / recursion
/*
It turns out that using % 9 find the sum of all digits because of math
*/
class Solution {
public:
    int addDigits(int num) {
      if(num == 9) {
        return 9;
      } else if(num%9 == 0) {
        return 9;
      } else {
        return num % 9;
      }
    }
};