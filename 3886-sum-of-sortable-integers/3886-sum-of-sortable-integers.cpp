class Solution {
public:
    vector<int> buildLPS(vector<int>& pattern) {
        int m = pattern.size();
        vector<int> lps(m, 0);

        int len = 0;
        int i = 1;

        while (i < m) {
            if (pattern[i] == pattern[len]) {
                lps[i++] = ++len;
            } else if (len > 0) {
                len = lps[len - 1];
            } else {
                lps[i++] = 0;
            }
        }

        return lps;
    }

    bool KMPsearch(vector<int>& text, vector<int>& pattern) {
        int n = text.size();
        int m = pattern.size();

        vector<int> lps = buildLPS(pattern);

        int i = 0, j = 0;

        while (i < n) {
            if (text[i] == pattern[j]) {
                i++;
                j++;

                if (j == m) {
                    return true;
                }
            } else if (j > 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }

        return false;
    }

    bool isRotated(vector<int>& v1, vector<int>& v2) {
        vector<int> text = v2;
        text.insert(text.end(), v2.begin(), v2.end());

        return KMPsearch(text, v1);
    }

    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();

        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        int res = 0;

        for (int k = 1; k <= n; k++) {
            if (n % k != 0) {
                continue;
            }

            bool valid = true;

            for (int start = 0; start < n; start += k) {
                vector<int> vec1(
                    nums.begin() + start,
                    nums.begin() + start + k
                );

                vector<int> vec2(
                    sorted.begin() + start,
                    sorted.begin() + start + k
                );

                if (!isRotated(vec1, vec2)) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                res += k;
            }
        }

        return res;
    }
};