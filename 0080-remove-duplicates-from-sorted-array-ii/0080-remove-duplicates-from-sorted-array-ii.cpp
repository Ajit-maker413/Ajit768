class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int temp=nums[0];
        int freq=0;
        int count=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
          if(nums[i] != temp)
          {
            temp=nums[i];
            freq=0;
          }
          if(nums[i]==temp)
          {
            freq++;
          }
          if(freq<=2)
          {
            count++;
           v.push_back(nums[i]);
          }
          
        }
        for(int i=0;i<v.size();i++)
        {
            nums[i]=v[i];
        }

        return count;
    }
};