class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        int length=0;
        int i=0;
        int j=0;
        unordered_map<int,int>um;
        while(j<nums.size())
    
        {
            if(!um.count(nums[j]))
            {
                um[nums[j]]=1;
            }
            else
            {
                if(um[nums[j]] +1 >k )
                {
                     
                     while(nums[i] != nums[j])
                     {
                        um[nums[i]]--;
                        i++;
                     }
                     um[nums[i]]--;
                     um[nums[j]]++;
                     i++;
                }
                else
                {
                    um[nums[j]]++;
                }

            }
            length=max(length,j-i+1);
            j++;
        }
        return length;
    }
};