class Solution {
public:
    bool isPalindrome(int x) {

        int n = x;

        if (n < 0)
            return false;

        int reverse = 0;

        while (n > 0) {
            int digit = n % 10;

            if (reverse > INT_MAX / 10 || reverse < INT_MIN / 10)
                return false;

            reverse = reverse * 10 + digit;
            n /= 10;
        }

        if (reverse == x)
            return true;
        else
            return false;
    }
};