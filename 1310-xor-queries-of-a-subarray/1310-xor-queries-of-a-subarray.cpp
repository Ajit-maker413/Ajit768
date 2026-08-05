class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int Xor=0;
        vector<int>v;
        for(int i=0;i<arr.size();i++)
        {
         Xor=Xor^arr[i];
         v.push_back(Xor);
        }
        vector<int>res;
        for(int i=0;i<queries.size();i++)
        {
            int left=queries[i][0];
            int right=queries[i][1];
            int ans;
            if(left==0)
            {
                ans=v[right];
            }
            else
            {
               ans=v[right]^v[left-1];
            }

            res.push_back(ans);
        }  
        return res;
        
    }
};