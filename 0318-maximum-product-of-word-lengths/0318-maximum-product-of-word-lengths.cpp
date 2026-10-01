
class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        int ans = 0;

        vector<vector<int>> hash(n, vector<int>(26, 0));

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < words[i].length(); k++) {
                hash[i][words[i][k] - 'a']++;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                bool common = false;

                for (int k = 0; k < 26; k++) {
                    if (hash[i][k] > 0 && hash[j][k] > 0) {
                        common = true;
                        break;
                    }
                }

                if (!common) {
                    int prod = words[i].length() * words[j].length();
                    ans = max(ans, prod);
                }
            }
        }

        return ans;
    }
};