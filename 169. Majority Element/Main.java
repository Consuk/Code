// https://leetcode.com/problems/majority-element/submissions/1079590835/
class Solution {
  public int majorityElement(int[] nums) {
    Map<Integer, Integer> majorNum = new HashMap<>();
    for (int x = 0; x < nums.length; x++) {
      if (majorNum.containsKey(nums[x])) {
        majorNum.put(nums[x], majorNum.get(nums[x]) + 1);
      } else {
        majorNum.put(nums[x], 1);
      }
    }
    int prevKey = 0;
    int prevValue = 0;
    for (Map.Entry<Integer, Integer> entry : majorNum.entrySet()) {
      if (entry.getValue() >= prevValue) {
        prevValue = entry.getValue();
        prevKey = entry.getKey();
      }
    }
    return prevKey;
  }
}