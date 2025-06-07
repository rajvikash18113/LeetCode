class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int t = n - k;
        vector<int> temp(t);
        for (int i = 0; i < t; i++) {
            temp[i] = nums[i];
        }

        for(int i = t; i < n; i++)
        {
            nums[i-t] = nums[i];
        }

        for(int i = 0; i < t; i++)
        {
            nums[n-t+i] = temp[i];
        }
    }
};