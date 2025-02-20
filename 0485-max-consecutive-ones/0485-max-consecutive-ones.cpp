class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0, max = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1)
                count++;
            if (count > max)
                max = count;
            if (nums[i] == 0)
                count = 0;
        }
        return max;
    }
};