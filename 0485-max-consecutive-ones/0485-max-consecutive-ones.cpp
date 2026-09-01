class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=INT_MIN;
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]==1)
            {
                int start=i;
                while( i<nums.size() && nums[i] ==1 )
                {
                    i++;
                }
                res=max(res,i-start);
                continue;

            }
            i++;

        }
        if(res==INT_MIN)
        {
            return 0;
        }
        return res;
    }
};