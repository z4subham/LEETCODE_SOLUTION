//brute force code written by me :- 

/*
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<vector<int>> ans;
        vector<vector<int>> temp;

        // Generate all possible pairs
        for(int i = 0; i < n1; i++) {
            for(int j = 0; j < n2; j++) {
                temp.push_back({nums1[i], nums2[j]});
            }
        }

        // Sort pairs based on their sum
        sort(temp.begin(), temp.end(), [](vector<int>& a, vector<int>& b) {
            return (long long)a[0] + a[1] < (long long)b[0] + b[1];
        });

        // Store the first k pairs
        for(int i = 0; i < min(k, (int)temp.size()); i++) {
            ans.push_back(temp[i]);
        }

        return ans;
    }
};

*/ 

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        vector<vector<int>> ans;

        int n1 = nums1.size();
        int n2 = nums2.size();

        if(n1 == 0 || n2 == 0 || k == 0) {
            return ans;
        }

        // Min-heap: {sum, i, j}
        priority_queue<
            tuple<long long, int, int>,
            vector<tuple<long long, int, int>>,
            greater<tuple<long long, int, int>>
        > pq;

        // Initialize the heap
        for(int i = 0; i < min(k, n1); i++) {
            pq.push({(long long)nums1[i] + nums2[0], i, 0});
        }

        // Extract the k smallest pairs
        while(k > 0 && !pq.empty()) {

            auto [sum, i, j] = pq.top();
            pq.pop();

            ans.push_back({nums1[i], nums2[j]});

            if(j + 1 < n2) {
                pq.push({
                    (long long)nums1[i] + nums2[j + 1],
                    i,
                    j + 1
                });
            }

            k--;
        }

        return ans;
    }
};
