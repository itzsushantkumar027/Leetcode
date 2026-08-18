class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;

        // Count frequency of each element
        for (int x : nums) {
            mpp[x]++;
        }

        int ans = -1;

        // Case 1: k == n
        if (k == nums.size()) {
            for (int x : nums) {
                ans = max(ans, x);
            }
        }

        // Case 2: k == 1
        else if (k == 1) {
            for (auto &[x, cnt] : mpp) {
                if (cnt == 1) {
                    ans = max(ans, x);
                }
            }
        }

        // Case 3: 1 < k < n
        else {
            for (auto &[x, cnt] : mpp) {
                if (cnt == 1 &&
                    (x == nums[0] || x == nums.back())) {
                    ans = max(ans, x);
                }
            }
        }

        return ans;
    }
};