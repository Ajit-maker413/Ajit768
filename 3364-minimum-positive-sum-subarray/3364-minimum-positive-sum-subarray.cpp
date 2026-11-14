class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans=INT_MAX;
        int i=0;
        int j=1;
        int n=r-l+1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                if(j-i+1>=l && j-i+1 <=r and sum>0)
                {
                    ans=min(ans,sum);

                }
            }
            sum=0;
        }
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
        
    }
};