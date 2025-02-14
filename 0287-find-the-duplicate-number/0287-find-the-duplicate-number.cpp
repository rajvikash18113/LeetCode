class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == nums[i+1])
            {
                return nums[i];
            }
        }
        return 0;
        // this is not a right solution according to question. I'll solve it later
    }
};