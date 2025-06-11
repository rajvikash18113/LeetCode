class Solution {
public:
//---------------------- Better Approach-------------------//
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> hashArr(n+1, 0);

        for(int i = 0; i < n; i++){
            hashArr[nums[i]]++;
        }
        for(int i = 0; i <= n; i++){
            if(hashArr[i] == 0)
            return i;
        }
        return -1;
    }
};