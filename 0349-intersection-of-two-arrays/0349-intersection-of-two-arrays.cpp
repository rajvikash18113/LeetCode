class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> ans;
        for (auto it : nums2) {
            if (set1.count(it)) {
                ans.insert(it);
            }
        }
        return vector<int>(ans.begin(), ans.end());
    }
};