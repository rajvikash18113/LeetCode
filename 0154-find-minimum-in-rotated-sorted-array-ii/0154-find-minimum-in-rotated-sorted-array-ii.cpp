class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int min_ele = nums[0];
        int low = 0, high = n - 1;
        if (n == 1)
            return nums[0];
        while (low <= high) {
            int c = high - low + 1;
            int mid = (low + high) / 2;
            if (c > 3 && nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue;
            }
            if (nums[low] <= nums[mid]) {
                min_ele = min(min_ele, nums[low]);
                low = mid + 1;
            } else {
                min_ele = min(min_ele, nums[mid]);
                high = mid - 1;
            }
        }
        return min_ele;
    }
};