/*
https://leetcode.com/problems/remove-element/submissions/1240213781/
*/
class Solution {
public:
  int removeElement(vector<int> &nums, int val) {
    int cont = 0;
    for (int x = 0; x < nums.size(); x++)
      if (nums[x] != val) {
        nums[cont] = nums[x];
        cont++;
      }
    return cont;
  }
};
