class Solution {
public:
    // Optimized Approach
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        // reverse k elements
        reverse(nums, n - k, n - 1);

        // reverse remaining n - k elements
        reverse(nums, 0, n - k - 1);

        // reverse the entire elements
        reverse(nums, 0, n - 1);
    }
};