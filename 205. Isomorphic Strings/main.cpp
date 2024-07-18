/*
https://leetcode.com/problems/isomorphic-strings/submissions/1143774199/
*/
class Solution {
public:
  bool isIsomorphic(string s, string t) {
    if (s.size() != t.size())
      return false;
    unordered_map<char, char> sMap;
    unordered_map<char, char> tMap;
    for (int x = 0; x < s.size(); x++) {
      if (sMap.find(s[x]) == sMap.end() && tMap.find(t[x]) == tMap.end()) {
        sMap[s[x]] = t[x];
        tMap[t[x]] = s[x];
      } else {
        if (sMap[s[x]] != t[x] && tMap[t[x]] != s[x])
          return false;
      }
    }
    return true;
  }
};