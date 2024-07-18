/*
https://leetcode.com/problems/word-pattern/description/
*/
class Solution {
public:
  bool wordPattern(string pattern, string s) {
    map<string, char> dic;
    set<char> contP;
    contP.insert(pattern.begin(), pattern.end());
    int word = 0, contW = 0;
    for (int x = 0; x < s.size(); x++) {
      if (s[x] == ' ')
        contW++;
    }
    if (contW > pattern.size() || contW < pattern.size() - 1)
      return false;
    for (int x = 0; x < pattern.size(); x++) {
      string aux = "";
      while (s[word] != ' ' && word < s.size()) {
        aux += s[word];
        word++;
      }
      word++; // case " "
      if (auto search = dic.find(aux); search != dic.end()) {
        if (search->second != pattern[x])
          return false;
      } else {
        dic[aux] = pattern[x];
      }
    }
    if (word < s.size())
      return false;
    if (dic.size() != contP.size())
      return false;
    return true;
  }
};