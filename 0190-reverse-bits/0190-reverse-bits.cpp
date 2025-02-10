class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int index = 31;
        int ans = 0;

        while(n != 0)
        {
            if((n & 1) == 1)
            {
                ans = ans | (1 << index);
            }
            index--;
            n = n >> 1;
        }
        return ans;
    }
};