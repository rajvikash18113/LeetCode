class Solution {
public:
    bool checkPalindrome(string& result, int left, int right) {
        if (left >= right)
            return true;
        if (result[left] != result[right])
            return false;
        return checkPalindrome(result, left + 1, right - 1);
    }
    
    bool isPalindrome(string s) {
        string result;
            for (char c : s) {
            // convert all character to lowercase
            c = tolower(c);
            // to remove all non-alpha numeric chracter
            if (isalnum(static_cast<unsigned char>(c))) {
                result += c;
            }
        }
        return checkPalindrome(result, 0, result.size() - 1);
    }
};