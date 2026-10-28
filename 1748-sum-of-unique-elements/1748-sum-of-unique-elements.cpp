class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       int sum=0;
       unordered_map<int,int>um;
       for(int i=0;i<nums.size();i++)
       {
        if(um.count(nums[i]))
        {
            um[nums[i]]++;
        }
        else
        {
            um[nums[i]]=1;

        }
       }
       for(auto it:um)
       {
        if(it.second ==1)
        {
            sum+=it.first;
        }
       }
      
        return sum;
        
    }
};