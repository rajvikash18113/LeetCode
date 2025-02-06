class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();

        // calculate the sum of diagonal
        for (int i = 0; i < n; i++) {
            sum += mat[i][i];           // Primary diagonal
            sum += mat[i][n - 1 - i];   // Secondary diagonal
        }

        // if matrix is odd subtract the middle element one time
        if (n % 2 == 1) 
        {
            sum -= mat[n / 2][n / 2];
        }

        return sum;
    }
};
