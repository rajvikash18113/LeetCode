class Solution {
public:
    //-------Optimal Approach------//
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) // Edge Case
            return nums[0];
        if (nums[0] != nums[1]) // Edge Case
            return nums[0];
        if (nums[n - 1] != nums[n - 2]) // Edge Case
            return nums[n - 1];

        int low = 1, high = n - 2;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] != nums[mid - 1] &&
                nums[mid] != nums[mid + 1]) { // Element Found
                return nums[mid];
            }
            // We are in left half and answer is in right half
            if (mid % 2 == 0 && nums[mid] == nums[mid + 1] ||
                mid % 2 == 1 && nums[mid] == nums[mid - 1]) {
                low = mid + 1;
            } else {
                // We are in right half and answer is in left half
                high = mid - 1;
            }
        }
        return -1;
    }
};