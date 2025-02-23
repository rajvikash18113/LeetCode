class Solution {
public:
    int fib(int n) {
        // Using Loop
        int i = 1;
        int first = 0, second = 1, sum = 0;
        if(n <= 1) return n;
        while(i < n)
        {
            sum = first + second;
            first = second;
            second = sum;
            i++;
        }
        return sum;
    }
};