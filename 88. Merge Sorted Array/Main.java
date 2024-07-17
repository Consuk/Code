// https://leetcode.com/problems/merge-sorted-array/submissions/1072203904/
class Solution {
  public void merge(int[] nums1, int m, int[] nums2, int n) {
    ArrayList<Integer> aux = new ArrayList<>();
    for (int x = 0; x < m; x++)
      aux.add(nums1[x]);
    for (int x = 0; x < n; x++)
      aux.add(nums2[x]);
    Collections.sort(aux);
    n = 0;
    for (int num : aux) {
      nums1[n] = num;

      n++;
    }
  }
}