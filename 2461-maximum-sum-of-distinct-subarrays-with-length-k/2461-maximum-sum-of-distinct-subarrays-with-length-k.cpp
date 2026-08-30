class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        set<int>st;
        int i=0;
        int j=0;
        long long result=0;
        long long sum=0;
        while(j<nums.size())
        {
            if(st.count(nums[j]))
            {
                while(st.count(nums[j]))
                {
                    st.erase(nums[i]);                  
                    sum =sum-nums[i];
                     i++;
                }

            }
            st.insert(nums[j]);
            sum += nums[j];
            if(j-i+1 == k)
            {
                result=max(result,sum);
                st.erase(nums[i]);
                
                sum =sum -nums[i];
                i++;
            }
            j++;
        }
       return result;
        
    }
};