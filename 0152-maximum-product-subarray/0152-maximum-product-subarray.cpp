class Solution {
public:
    //------------Optimal Solution-----------//
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long prefix = 1;
        long long sufix = 1;
        long long maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            prefix *= nums[i];
            sufix *= nums[n - i - 1];
            maxi = max(maxi, max(prefix, sufix));

            if (prefix == 0)
                prefix = 1;
            if (sufix == 0)
                sufix = 1;
        }
        return maxi;
    }
};