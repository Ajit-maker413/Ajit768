class Solution {
public:
    int minMoves(vector<int>& nums) {
        int Min=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<Min)
            {
                Min=nums[i];
            }
        }
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            count+= abs(nums[i]-Min);
        }
       return count;
        
    }
};