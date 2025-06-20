class Solution {
public:
//--------------Better Approach : HashMap--------------//
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        int ele = nums.size() / 2;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second > ele){
                return it.first;
            }
        }
        return -1;
    }
};