class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int sum = INT_MIN;
        for (int i = 0; i + 2 < grid.size(); i++) 
        {
            for (int j = 0; j + 2 < grid[0].size(); j++) 
            {
                    int temp = grid[i][j] + grid[i][j+1] + grid[i][j + 2] +
                               grid[i + 1][j+1] +
                                grid[i + 2][j] + grid[i + 2][j+1] + grid[i + 2][j + 2];
                    sum = max(sum, temp);
                
            }
        }
        return sum;
    }
};