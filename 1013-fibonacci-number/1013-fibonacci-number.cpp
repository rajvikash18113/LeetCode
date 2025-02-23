class Solution {
public:
    int fib(int n) {
        // using Multiple Recursion Call
        if (n <= 1)
            return n;
        int last = fib(n - 1);
        int second_last = fib(n - 2);
        return last + second_last;
    }
};