class Solution {
public:
    int res=INT_MAX;
    int firstStableIndex(vector<int>& nums, int k)
    {
    for(int i =0;i<nums.size();i++)
    {
        int small=INT_MAX;
        int big=INT_MIN;
        for(int j=0;j<nums.size();j++)
        {
            if(j>=i)
            {
                small=min(small,nums[j]);
            }
            if(j<=i)
            {
                big=max(big,nums[j]);
            }
          
        }
          cout<<small;
          cout<<big;
          cout<<endl;
          if(big-small <=k)
          {
            res=i;
            break;
          }
        
    }
        
    if(res==INT_MAX)
    {
        return -1;
    }
    return res;
    }
};