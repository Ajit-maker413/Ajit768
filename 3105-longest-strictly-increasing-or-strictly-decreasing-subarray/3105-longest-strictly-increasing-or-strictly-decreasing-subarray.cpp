class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        int i=0;
        int j=1;
        int len=0;
     while(i<nums.size() && j<nums.size())
     {
        if(nums[j]<=nums[j-1])
        {
           cout<<nums[i]<<" "<<nums[j];
            len=max(len,j-i);
            i=j;
        }
        j++;
     }
    len=max(len,j-i);
    i=0;
    j=1;
    while(i<nums.size() && j<nums.size())
     {
        if(nums[j]>=nums[j-1])
        {
           cout<<nums[i]<<" "<<nums[j];
            len=max(len,j-i);
            i=j;
        }
        j++;
     }
     len=max(len,j-i);
     cout<<len;
     return len;
        
    }
};