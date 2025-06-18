class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        vector<pair<int, int>> arr;
        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end());

        while (left < right) {
            int sum = arr[left].first + arr[right].first;
            if (sum < target) {
                left++;
            } else if (sum > target) {
                right--;
            } else {
                return {arr[left].second, arr[right].second};
            }
        }
        return {};
    }
};