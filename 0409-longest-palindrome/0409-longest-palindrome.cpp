class Solution {
public:
    int longestPalindrome(string s) {

        vector<int> hash(256, 0);

        // Count frequency
        for(int i = 0; i < s.length(); i++) {
            hash[s[i]]++;
        }

        int ans = 0;
        int ctr = 0;

        for(int i = 0; i < 256; i++) {

            if(hash[i] % 2 == 0) {
                ans += hash[i];
            }
            else {
                ans += hash[i] - 1;
                ctr++;
            }
        }

        // One odd character can be placed in the middle
        if(ctr > 0) {
            ans++;
        }

        return ans;
    }
};