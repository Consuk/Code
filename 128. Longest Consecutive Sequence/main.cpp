/*
https://leetcode.com/problems/longest-consecutive-sequence/description/
*/
class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
    if (nums.empty())
      return 0;
    if (nums.size() == 1)
      return 1;
    sort(nums.begin(), nums.end());
    int prev = nums[0], aux = 1, cont = 1;
    for (int x = 0; x < nums.size(); x++) {
      if (prev == nums[x] - 1) {
        aux++;
        prev = nums[x];
      } else if (prev == nums[x]) {
        continue;
      } else {
        aux = 1;
        prev = nums[x];
      }
      cont = max(aux, cont);
    }
    return cont;
  }
};