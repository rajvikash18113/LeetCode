class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int n = nums.size();
        int k = 0;
        for(int i = 1; i < n; i++)
        {
            if(nums[i-1] != nums[i])
            {
                k++;
                nums[k] = nums[i];                               
            }
        }
        return k+1;
    }
};