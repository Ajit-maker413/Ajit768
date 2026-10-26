class Solution {
public:
    long long countSubarrays(vector<int>& nums, int mink, int maxk) {
        int i = 0;
        int j = 0;
        long long count = 0;

        while (j < nums.size()) {
            if (nums[j] >= mink && nums[j] <= maxk) {
                j++;
            } else {
                int len = j - i;
                count += 1LL * len * (len + 1) / 2;

                i = j + 1;
                j = i;
            }
        }

        count += 1LL * (j - i) * (j - i + 1) / 2;

        return count;
    }
};