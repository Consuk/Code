/*
https://leetcode.com/problems/contains-duplicate-ii/submissions/
*/
class Solution {
public:
  bool containsNearbyDuplicate(vector<int> &nums, int k) {
    map<int, int> kranges;
    for (int x = 0; x < nums.size(); x++) {
      if (kranges.find(nums[x]) != kranges.end() &&
          abs(x - kranges[nums[x]]) <= k)
        return true;
      kranges[nums[x]] = x;
    }
    return false;
  }
};