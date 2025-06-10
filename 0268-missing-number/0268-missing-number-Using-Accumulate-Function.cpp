class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n * (n + 1)) / 2;
        
        // accumulate function is a part of <numeric> library in C++ which is
        // used to  calculate the sum of the given set.
        int arrSum = accumulate(nums.begin(), nums.end(),0); 
        // 0 means initial sum of the set is 0

        return sum - arrSum;
    }
};
