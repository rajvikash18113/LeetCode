class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> temp;
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
            temp.push_back(sum);
        }
        return temp;
    }
};