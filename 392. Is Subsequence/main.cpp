/*
https://leetcode.com/problems/is-subsequence/description/
*/
class Solution {
public:
  bool isSubsequence(string s, string t) {
    int pos = 0;
    if (s.empty()) {
      return true;
    }
    for (int x = 0; x < t.size(); x++) {
      if (s[pos] == t[x]) {
        pos++;
        if (pos == s.size()) {
          return true;
        }
      }
    }
    return false;
  }
};