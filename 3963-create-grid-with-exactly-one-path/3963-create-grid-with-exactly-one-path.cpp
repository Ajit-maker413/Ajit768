
class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> s(m, string(n, '#'));

        int i = 0;
        int j = 0;

        while (i < m - 1) {
            s[i][j] = '.';
            i++;
        }

        while (j < n) {
            s[i][j] = '.';
            j++;
        }

        return s;
    }
};
