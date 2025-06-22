class Solution {
public:
    //----------Optimal Approach : Kadane's Algorithm -----------//
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int maxi = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            sum += nums[i];
            sum = max(nums[i], sum);
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};