/*https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/1119140065/*/
class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    for (int x = 0; x < numbers.size(); x++) {
      int right = numbers.size() - 1, left = x, half = 0;
      while (numbers[x] == numbers[x + 1])
        x++;
      while (left < right) {
        half = (left + right) / 2;
        if (numbers[half] + numbers[left] == target) {
          return {left + 1, half + 1};
        } else if (numbers[half] + numbers[right] == target) {
          return {half + 1, right + 1};
        } else if (numbers[left] + numbers[right] == target) {
          return {left + 1, right + 1};
        } else if (numbers[right] + numbers[half] > target) {
          right--;
        } else if (numbers[left] + numbers[half] < target) {
          left++;
        } else {
          left++;
          right--;
        }
      }
    }
    return {};
  }
};