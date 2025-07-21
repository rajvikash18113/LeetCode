class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int close = INT_MAX;
        int ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                long long sum = nums[i] + nums[left] + nums[right];
                int diff = abs(sum - target);
                if (diff < close) {
                    ans = sum;
                    close = diff;
                }
                if(sum < target){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return ans;
    }
};