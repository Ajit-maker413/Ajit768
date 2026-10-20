class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int m=-1;
        int n=-1;
        int pro=INT_MIN;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i != j && nums[i]+nums[j]==target && nums[i]>nums[j])
                {
                    if(pro< (nums[i]*nums[j]) )
                    {
                       pro=nums[i]*nums[j];
                       m=i;
                       n=j;
                    }
                }
            }
        }
        v.push_back(m);
        v.push_back(n);
        return v;
        
    }
};