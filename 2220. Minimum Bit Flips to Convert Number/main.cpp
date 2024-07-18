/*
https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/
*/
class Solution {
public:
  int minBitFlips(int start, int goal) {
    int flips = 0;
    while (start != goal) {
      // Si el bit más a la derecha de start es diferente al de goal
      if ((start & 1) != (goal & 1)) {
        flips++;
        start ^= 1; // Invierte el último bit de start
      }
      // Desplaza start y goal un bit a la derecha
      start >>= 1;
      goal >>= 1;
    }
    return flips;
  }
};