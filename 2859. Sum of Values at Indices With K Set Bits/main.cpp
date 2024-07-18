/*
https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/description/
*/
class Solution {
public:
  int xorOperation(int n, int start) {
    vector<int> binary;
    int prev = start + 2 * 0;
    for (int x = 1; x < n; x++) {
      int current = start + 2 * x;
      prev = prev ^ current;
    }
    return prev;
  }
};