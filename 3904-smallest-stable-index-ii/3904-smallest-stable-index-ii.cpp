class Solution {
public:
   
    int firstStableIndex(vector<int>& nums, int k)
    {
    vector<int>Max;
    int Max_val=INT_MIN;
    
    vector<int>Min;
    int Min_val=INT_MAX;

    int n=nums.size();

    for(int i =0;i<nums.size();i++)
    {
        Max_val=max(Max_val,nums[i]);
        Max.push_back(Max_val);

        Min_val=min(Min_val,nums[n-i-1]);
        Min.push_back(Min_val);
    
    }
    reverse(Min.begin(),Min.end());
  
    int res=INT_MAX;
    int ind;
     for(int i =0;i<nums.size();i++)
     {
        int stable=Max[i]-Min[i];
        if(stable <=k && res>stable)
        {
            res=stable;
            ind=i;
            break;
        }
     }
     if(res==INT_MAX)
     {
        return -1;
     }
     return ind;

    
    }
};
