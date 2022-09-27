/*
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.
*/
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int result = 0, i = s.size() - 1;
        bool found = false;
        
        while(i >= 0) {
          if(s[i] != ' ')
          {
            found = true;
            result++;
          } else if(found == true) {
            break;
          }

          i--;
        }

        return result;
    }
};