class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=0;
        vector<int>v;
        for(int i=nums[0] ; i<nums[nums.size()-1] ; i++)
        {
          if(j<nums.size() && nums[j] != i)
          {
            v.push_back(i);
          }
          if(nums[j] == i)
          {
            j++;
          }

        }
     return v;
        
    }
};