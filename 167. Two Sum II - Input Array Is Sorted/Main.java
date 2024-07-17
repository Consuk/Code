// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/1242026185/
class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int l = 0, r = numbers.length-1;
        while(l<=r)
        {
            int currentSum = numbers[l] + numbers[r];
            if(currentSum == target) return new int[]{l+1, r+1};
            else if (currentSum <= target) l++;
            else if (currentSum >= target) r--;
            else {l++; r--;}
        }
        return new int[]{};
    }
}