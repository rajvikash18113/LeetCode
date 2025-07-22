class Solution {
public:
    int firstPosition(vector<int> nums, int target) {
        int n = nums.size();
        int first = -1;
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= target) {
                if (nums[mid] == target) {
                    first = mid;
                }
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return first;
    }
    int secondPosition(vector<int> nums, int target) {
        int n = nums.size();
        int second = -1;
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] <= target) {
                if (nums[mid] == target) {
                    second = mid;
                }
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return second;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstPosition(nums, target);
        int second = secondPosition(nums, target);
        return {first, second};
    }
};