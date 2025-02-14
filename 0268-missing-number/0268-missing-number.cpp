class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int arrSum = 0;
        int sum = 0;
        int n = nums.size();
        for (int i = 1; i <= n; i++) {
            sum += i;
            arrSum += nums[i - 1];
        }
        return sum - arrSum;
    }
};