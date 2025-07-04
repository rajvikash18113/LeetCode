class Solution {
public:
    //--------Optimal Approach : Moore's voting Algorithm--------//
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int element1 = INT_MIN;
        int element2 = INT_MIN;
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (count1 == 0 && element2 != nums[i]) {
                element1 = nums[i];
                count1++;
            } else if (count2 == 0 && element1 != nums[i]) {
                element2 = nums[i];
                count2++;
            } else if (nums[i] == element1) {
                count1++;
            } else if (nums[i] == element2) {
                count2++;
            } else {
                count1--;
                count2--;
            }
        }
        int count3 = 0, count4 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == element1) {
                count3++;
            } else if (nums[i] == element2) {
                count4++;
            }
        }
        if (count3 > (n / 3)) {
            ans.push_back(element1);
        }
        if (count4 > (n / 3)) {
            ans.push_back(element2);
        }
        return ans;
    }
};