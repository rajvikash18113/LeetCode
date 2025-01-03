class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prev_result = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int result = (nums[i] - 1) * (nums[j] - 1);
                prev_result = max(prev_result, result);
            }
        }
        return prev_result;
    }
};