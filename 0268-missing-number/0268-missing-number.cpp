class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //------------------ Optimized --------------------//
        int n = nums.size();
        int totalSum = n*(n+1)/2;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        return totalSum - sum; 
    }
};