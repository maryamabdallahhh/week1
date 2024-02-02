#include <iostream>
using namespace std;
#include<vector>
#include <cassert>
#include <queue>
#include <unordered_map>
#include <iostream>
 class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
int main()
{
 }

 