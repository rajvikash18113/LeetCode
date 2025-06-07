class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> st;
        for(int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }

        int index = 0; 
        for(auto i : st)
        {
            nums[index] = i;
            index++;
        }
        return index;
    }
};