class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int pos = nums.end() - upper_bound(nums.begin(), nums.end(), 0);
        int neg = nums.end() - upper_bound(nums.begin(), nums.end(), -1);
        neg = n - neg;
        return max(pos, neg);
    }
}; 