class Solution {
public:
    //-----------Optimal Approach : Transpose and Reverse-----------//
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        // Transposing the Matrix
        for (int i = 0; i < n; i++) {
            for (int j = i; j < m; j++) {
                if (i != j) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
        // Reverseing each Row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};