class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();

        int i = 0;
        int j = n - 1;

        while (i < j) {

            // ADD: skip non-alphanumeric characters
            if (!isalnum(s[i])) {
                i++;
                continue;
            }

            if (!isalnum(s[j])) {
                j--;
                continue;
            }

            // ADD: compare ignoring uppercase/lowercase
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};