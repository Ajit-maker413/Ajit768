class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
     vector<vector<int>>v;
    
     sort(arr.begin(),arr.end());
    int min_val=INT_MAX;
    for(int i=0;i<arr.size()-1;i++)
    {
       if( min_val > ( abs(arr[i]-arr[i+1] )  ))
       {
          min_val=abs(arr[i]-arr[i+1]);
       }
       cout<<min_val;
     }
     cout<<min_val;
     
     for(int i=0;i<arr.size()-1;i++)
     {
        if( (arr[i+1]-arr[i] ) == min_val)
        v.push_back({arr[i],arr[i+1]});
        
     }
     return v;
        
    }
};