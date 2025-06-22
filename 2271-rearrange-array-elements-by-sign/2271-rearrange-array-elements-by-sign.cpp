class Solution {
public:
    //-----------------2nd Approach-----------------//
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> rearranged(n, 0);
        int posIndex = 0;
        int negIndex = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                rearranged[negIndex] = nums[i];
                negIndex += 2;
            } else {
                rearranged[posIndex] = nums[i];
                posIndex += 2;
            }
        }
        return rearranged;
    }
};