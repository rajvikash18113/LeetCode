class Solution {
public:
    int findMin(vector<int>& nums) {
        int min_ele = INT_MAX;
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[low] <= nums[mid]){
                min_ele = min(min_ele, nums[low]);
                low = mid + 1;
            }else{
                min_ele = min(min_ele, nums[mid]);
                high = mid - 1;
            }
        }
        return min_ele;
    }
};