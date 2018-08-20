class Solution {
public:
    /**
     * @param a: a positive integer
     * @return: the smallest positive integer whose multiplication of each digit equals to a
     */
    int smallestFactorization(int a) {
		long res = 0;
		long b = 1;
		for (int i = 9; i > 1; --i)
		{
			while(a % i == 0){
				a /= i;
				res += i*b;
				b *= 10;
				if(res > 0x7fffffff){
					return 0;
				}
			}
		}
		return a == 1 ? res : 0;
	}
};