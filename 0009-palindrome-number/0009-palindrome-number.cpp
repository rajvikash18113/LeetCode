class Solution {
public:
    bool isPalindrome(int x) {

        int n = x;
        // if the number is negative or less than 0 then return false
        if (n < 0)
            return false;

        int reverse = 0;

        while (n > 0) {
            int digit = n % 10;
            // check for integer OverFlow and UnderFlow
            // If the output is greater or smaller than the range of integer
            // value then return false
            if (reverse > INT_MAX / 10 || reverse < INT_MIN / 10)
                return false;

            reverse = reverse * 10 + digit;
            n /= 10;
        }
        return (reverse == x);
    }
};