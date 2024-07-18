/*
https://leetcode.com/problems/ransom-note/submissions/1136722343/
*/
class Solution {
public:
  bool canConstruct(string ransomNote, string magazine) {
    int pos = 0;
    for (int x = 0; x < magazine.size(); x++) {
      for (int z = 0; z < ransomNote.size(); z++) {
        if (magazine[x] == ransomNote[z]) {
          ransomNote[z] = '0';
          pos++;
          break;
        }
      }
      if (pos == ransomNote.size())
        return true;
    }
    return false;
  }
};