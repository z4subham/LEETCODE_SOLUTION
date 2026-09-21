class Solution {

private:
    bool ischar(char ch) {

        // Check lowercase letters
        for(char ch_ = 'a'; ch_ <= 'z'; ch_++) {
            if(ch == ch_) {
                return true;
            }
        }

        // Check uppercase letters
        for(char ch_ = 'A'; ch_ <= 'Z'; ch_++) {
            if(ch == ch_) {
                return true;
            }
        }

        return false;
    }

public:
    string reverseByType(string s) {

        int i = 0;
        int j = s.length() - 1;

        // Reverse letters
        while(i < j) {

            if(ischar(s[i]) && ischar(s[j])) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if(!ischar(s[i])) {
                i++;
            }
            else {
                j--;
            }
        }

        // Reverse special characters
        i = 0;
        j = s.length() - 1;

        while(i < j) {

            if(!ischar(s[i]) && !ischar(s[j])) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if(ischar(s[i])) {
                i++;
            }
            else {
                j--;
            }
        }

        return s;
    }
};