// https://leetcode.com/problems/remove-element/submissions/1240213781/
class Solution {
  public int removeElement(int[] nums, int val) {
    int nuevaLongitud = 0;
    for (int i = 0; i < nums.length; i++) {
      if (nums[i] != val) {
        nums[nuevaLongitud] = nums[i];
        nuevaLongitud++;
      }
    }

    return nuevaLongitud;
  }
}