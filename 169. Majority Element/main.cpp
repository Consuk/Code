/*
https://leetcode.com/problems/majority-element/submissions/1079590835/
*/
class Solution {
public:
  int majorityElement(vector<int> &nums) {
    map<int, int> majorNum;
    for (int x = 0; x < nums.size(); x++) {
      majorNum[nums[x]] = 0;
    }
    for (int x = 0; x < nums.size(); x++) {
      if (majorNum.find(nums[x])->first == nums[x]) {
        majorNum[nums[x]]++;
      }
    }
    for (int x = 0; x < nums.size(); x++) {
      cout << majorNum.find(nums[x])->first << " "
           << majorNum.find(nums[x])->second << endl;
    }
    int aux = 0, val = 0;
    for (int x = 0; x < nums.size(); x++) {
      // cout << "a: " << aux << "\n";
      cout << "a: " << aux << " " << majorNum.find(nums[x])->second << "\n";
      if (majorNum.find(nums[x])->second >= aux) {
        aux = majorNum.find(nums[x])->second;
        val = majorNum.find(nums[x])->first;
      }
    }

    return val;
  }
};