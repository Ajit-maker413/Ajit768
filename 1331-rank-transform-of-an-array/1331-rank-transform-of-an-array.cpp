class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>v;
        unordered_map<int,int>um;
        for(int i=0;i<arr.size();i++)
        {
            v.push_back(arr[i]);
        }
        sort(v.begin(),v.end());
        int rank=0;
        for(int i=0;i<v.size();i++)
        {
           if(!um.count(v[i]))
           {
            if(rank==0)
            {
                rank=i+1;
            }
            else
            {
                rank++;
            }
            um.insert({v[i],rank});
           }
        }
          for(int i=0;i<v.size();i++)
        {
            if(um.count(arr[i]))
            {
                arr[i]=um[arr[i]];
            }
        }
        return arr;
  
    }
};