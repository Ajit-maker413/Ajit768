class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);

            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                int Max = 0;
                int Min = INT_MAX;

                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        Max = max(Max, freq[k]);
                        Min = min(Min, freq[k]);
                    }
                }

                ans += (Max - Min);
            }
        }

        return ans;
    }
};