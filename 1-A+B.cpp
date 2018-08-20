class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: The sum of a and b 
     */
    int aplusb(int a, int b) {
        int a_, b_;
        while(b != 0 ) {
          a_ = a ^ b;
          b_ = (a & b) << 1;
          a = a_;
          b = b_;
        }
        return a;
    }
};