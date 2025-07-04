class Solution {
public:
    //------------Better Approach------------//
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mpp;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
        for (auto i : mpp) {
            if (i.second > (n / 3)) {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};