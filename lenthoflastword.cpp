#include <iostream>
using namespace std;
#include<vector>
#include <cassert>
#include <queue>
#include <unordered_map>
#include <iostream>
class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int length = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ' && length == 0) {
                continue;
            }
            else if (s[i] == ' ') {
                break;
            }
            else {
                length++;
            }
        }

        return length;
    }
};

int main()
{

 }
 