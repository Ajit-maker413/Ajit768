class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
     long long  sum=0;
      int Xor=0;
      for(int i=0;i<nums.size();i++)
      {
        sum+=nums[i];
        Xor=Xor ^nums[i];
      }
      if(sum==0)
      {
        return 0;
      }
      if(Xor==0)
      {
        return nums.size()-1;
      }
      else
      {
        return nums.size();
      }
        
    }
};