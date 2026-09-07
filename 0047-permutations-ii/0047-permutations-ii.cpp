class Solution {
public:
    set<vector<int>> st;
    
    void permutate(vector<int>& nums ,vector<vector<int>>&ans,int idx)
    {
        if(idx==nums.size())
        {
            if(st.find(nums)==st.end())
            {
                ans.push_back(nums);
                st.insert(nums);

            }
            
            return;
        }
        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[i],nums[idx]);
            permutate(nums ,ans,idx+1);
            swap(nums[i],nums[idx]);

        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>>ans;
         permutate(nums ,ans,0);
         return  ans;

        
    }
};