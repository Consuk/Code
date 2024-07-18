/*
https://leetcode.com/problems/group-anagrams/description/
*/
class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    set<string> validAnagram;
    vector<string> original = strs;
    for (int x = 0; x < strs.size(); x++) {
      sort(strs[x].begin(), strs[x].end());
      validAnagram.insert(strs[x]);
    }
    vector<vector<string>> finalV(validAnagram.size());
    int pos = 0;
    for (const auto &elementoSet : validAnagram) {
      for (int z = 0; z < strs.size(); z++) {
        if (elementoSet == strs[z]) {
          finalV[pos].push_back(original[z]);
        }
      }
      pos++;
    }
    return finalV;
  }
};