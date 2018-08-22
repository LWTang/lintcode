class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
      long long a = 0;
        while(n != 0){
          a = a + n/5;
          n = n/5;
        }
        return a;
    }
};