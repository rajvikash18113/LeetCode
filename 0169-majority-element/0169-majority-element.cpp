class Solution {
public:
    //------------Optimal Approach : Moore's Voting Algorithm-------------//
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int element;
        int count1 = 0;
        for (int i = 0; i < n; i++) {
            if (count1 == 0) {
                element = nums[i];
                count1++;
            } else if (nums[i] == element) {
                count1++;
            } else {
                count1--;
            }
        }
        int count2 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == element) {
                count2++;
            }
        }
        if (count2 > n / 2) {
            return element;
        } else {
            return -1;
        }
    }
};