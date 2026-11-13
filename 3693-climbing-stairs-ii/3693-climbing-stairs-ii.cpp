
class Solution {
public:

    int calculate(int i, int n, vector<int>& costs,
                  vector<int>& dp) {

        if(i == n) {
            return 0;
        }

        if(dp[i] != -1) {
            return dp[i];
        }

        int ans = INT_MAX;

        for(int jump = 1; jump <= 3; jump++) {

            int j = i + jump;

            if(j <= n) {

                int curr = costs[j-1] + jump*jump
                           + calculate(j, n, costs, dp);

                ans = min(ans, curr);
            }
        }

        return dp[i] = ans;
    }

    int climbStairs(int n, vector<int>& costs) {

        vector<int> dp(n + 1, -1);

        return calculate(0, n, costs, dp);
    }
};
