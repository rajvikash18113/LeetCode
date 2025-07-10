class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int max_number = *max_element(nums.begin(), nums.end());
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        int sum = 0;
        for(auto it = mpp.rbegin(); it != mpp.rend(); it++){
            sum += it->second;
            if(sum >= k){
                return it->first;
            }
        }
        return 0;
    }
};