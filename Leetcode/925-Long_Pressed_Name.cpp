/*
Your friend is typing his name into a keyboard. Sometimes, when typing a character c, the key might get long pressed, and the character will be typed 1 or more times.

You examine the typed characters of the keyboard. Return True if it is possible that it was your friends name, with some characters (possibly none) being long pressed. 
*/
#include <string>
using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
      int i = 0, j = 0, nameSize = name.length(), typedSize = typed.length();

      if(name[i] != typed[j]) {
        return false;
      }
      
      while(i < nameSize) {
        if(name[i] == typed[j]) {
          j++;
          if(name[i +1] == typed[j]) {
            i++;
          }
        } else {
          i++;
          if(name[i] != typed[j]) {
            return false;
          }
        }
      }

      return true;
    }
};