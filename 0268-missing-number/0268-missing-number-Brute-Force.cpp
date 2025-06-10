class Solution {
public:
//----------Brute Force Approach---------//
    int missingNumber(vector<int>& nums) {
        for(int i = 0; i <= nums.size(); i++)
        {
            bool present = 0;
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[j] == i)
                {
                    present = 1;
                    break;
                }
            }
            if(present == 0)
            return i;
        }
        return -1;
    }
};
