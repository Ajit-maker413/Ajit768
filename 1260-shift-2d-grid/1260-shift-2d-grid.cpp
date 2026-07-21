class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    int r=grid.size();
    int c=grid[0].size();
   
    int count=0;
    while(count < k%(r*c))
    {
         int temp=grid[r-1][c-1];
        count++;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int n=grid[i][j];
            grid[i][j]=temp;
            temp=n;
        }
    }
    }
        return grid;
    }
};