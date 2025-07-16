class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        int low1 = 0, high1 = nums.size() - 1;
        while (low1 <= high1) {
            int mid1 = (low1 + high1) / 2;
            if (nums[mid1] >= target) {
                if (nums[mid1] == target) {
                    first = mid1;
                }
                high1 = mid1 - 1;
            } else {
                low1 = mid1 + 1;
            }
        }

        int low2 = 0, high2 = nums.size() - 1;
        while (low2 <= high2) {
            int mid2 = (low2 + high2) / 2;
            if (nums[mid2] <= target) {
                if (nums[mid2] == target) {
                    last = mid2;
                }
                low2 = mid2 + 1;
            } else {
                high2 = mid2 - 1;
            }
        }
        return {first, last};
    }
};