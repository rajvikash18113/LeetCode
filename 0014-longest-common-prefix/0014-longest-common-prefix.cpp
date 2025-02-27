class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size() - 1];
        int index = 0;
        string substr = "";
        while(index < s1.size() && index < s2.size())
        {
            if(s1[index] == s2[index])
            {
                substr += s1[index];
                index++;
            }
            else
            {
                break;
            }
        }
        return substr;

    }
};