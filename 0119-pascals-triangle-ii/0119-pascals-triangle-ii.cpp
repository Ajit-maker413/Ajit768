class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v;
        v.push_back({1});
        
        int k=1;
        for(int i=1;i<=rowIndex;i++)
        {
            
            vector<int>row;
            row.push_back(1);
           
            for(int j=1;j<v[i-1].size();j++)
            {
                row.push_back(v[i-1][j-1] + v[i-1][j]);
            }
            row.push_back(1);
            v.push_back(row);
            for(int m=0;m<row.size();m++)
            {
                cout<<row[m];
            }
            cout<<endl;

        }
        return v[rowIndex];
        
    }
};