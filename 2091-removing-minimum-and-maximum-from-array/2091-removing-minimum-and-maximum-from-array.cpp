class Solution {
private:
    int maxm_no_indices(vector<int>& nums) {
        int n = nums.size();
        int max_ele = INT_MIN;
        int max_ele_indices = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] > max_ele) {
                max_ele = nums[i];
                max_ele_indices = i;
            }
        }
        return max_ele_indices;
    }

    int min_no_indices(vector<int>& nums) {
        int n = nums.size();
        int min_ele = INT_MAX;
        int min_ele_indices = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] < min_ele) {
                min_ele = nums[i];
                min_ele_indices = i;
            }
        }
        return min_ele_indices;
    }

public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int indices_max_no = maxm_no_indices(nums);
        int indices_min_no = min_no_indices(nums);

        if (indices_max_no < n/2 && indices_min_no < n/2) {
        int ans = max(indices_max_no, indices_min_no) + 1;
        return ans;
        }
        else if (indices_max_no >= n/2 && indices_min_no >= n/2) {
        int ans = n - min(indices_max_no, indices_min_no);
        return ans;
        }
        else {
        int ans1 = max(indices_max_no, indices_min_no) + 1;
        int ans2 = n - min(indices_max_no, indices_min_no);
        int ans3 = min(indices_max_no, indices_min_no) + 1
               + n - max(indices_max_no, indices_min_no);

        int ans = min({ans1, ans2, ans3});
        return ans;
        }
    }
};