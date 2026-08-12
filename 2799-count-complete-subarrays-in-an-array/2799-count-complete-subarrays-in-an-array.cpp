class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
            
        }

         
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
           set<int>new_set;
            for(int j=i;j<nums.size();j++)
            {
              new_set.insert(nums[j]);
              if( new_set.size() == st.size())
              {
                count++;
              }

            }
        }
        return count;
        
    }
};