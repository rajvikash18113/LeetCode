class Solution {
public:
//---------------Optimal Approach--------------//
    vector<int> generateRow(int row) {
        vector<int> generatedRow;
        long long res = 1;
        generatedRow.push_back(1);
        for (int i = 1; i < row; i++) {
            res = res * (row - i);
            res = res / i;
            generatedRow.push_back(res);
        }
        return generatedRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};