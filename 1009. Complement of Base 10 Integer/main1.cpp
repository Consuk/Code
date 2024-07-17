/*
https://leetcode.com/problems/complement-of-base-10-integer/description/
*/
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int aux= 0, cont = 0;
        while(n>0)
        {
            if(n%2!=1)
            {
                aux+= pow(2, cont);
            }
            cont++;
            n/=2;
        }
        return aux;
    }
};