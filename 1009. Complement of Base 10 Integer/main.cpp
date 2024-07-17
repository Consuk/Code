/*
https://leetcode.com/problems/complement-of-base-10-integer/description/
*/
class Solution {
public:
  int bitwiseComplement(int n) {
    if (n == 0)
      return 1;

    int mask = 1; // Inicializa una máscara con el bit menos significativo
                  // activado (1).

    int result = 0; // Inicializa el resultado.

    while (n > 0) {
      // Verifica si el bit menos significativo de n es 0.
      if ((n & 1) == 0) {
        // Si es 0, activa el bit correspondiente en el resultado usando OR
        // bitwise.
        result |= mask;
      }

      // Desplaza la máscara y n un bit a la izquierda y derecha,
      // respectivamente.
      mask <<= 1;
      n >>= 1;
    }

    return result; // Devuelve el resultado final.
  }
};