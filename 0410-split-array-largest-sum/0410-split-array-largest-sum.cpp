class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start=nums[0];
        int end=0;
        int ans=end;
        for(int i=0;i<nums.size();i++)
        {
            start=max(start,nums[i]);
            end += nums[i];
        }
        while(start<=end)
        {
            int sum=0;
            int count=0;
            int temp_sum=INT_MIN;
            int mid=(start+end)/2;
            for(int i=0;i<nums.size();i++)
            {
                if(sum+nums[i]>mid)
                {
                    temp_sum=max(temp_sum,sum);
                    sum=nums[i];
                    count++;
                }
                else
                {

                    sum += nums[i];
                }
            }
            count++;
            if(count<=k)
            {
                ans=mid;
                end=mid-1;

            }
            if(count>k)
            {
                start=mid+1;
            }
        }
        return ans;
        
    }
};