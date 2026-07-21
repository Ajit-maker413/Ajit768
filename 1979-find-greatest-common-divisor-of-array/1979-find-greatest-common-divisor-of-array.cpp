class Solution {
public:
   int gcd(int a,int b)
   {
    int res=1;
    for(int i=1;i<=a;i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            res=i;
        }

    }
    return res;
   }
    int findGCD(vector<int>& nums) {
        int small=INT_MAX;
        int big=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<small)
            {
                small=nums[i];
            }
            if(nums[i]>big)
            {
                big=nums[i];
            }
        }
        return gcd(small,big);
        
    }
};