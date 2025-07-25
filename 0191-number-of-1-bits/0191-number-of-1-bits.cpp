class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        if (n == 0)
            return 0;
        while (n != 0) {
            if (n % 2 != 0) {
                count++;
            }
            n /= 2;
        }
        return count;

        // return bitset<32>(n).count(); // this line alone can perform all action of above code
    }
};