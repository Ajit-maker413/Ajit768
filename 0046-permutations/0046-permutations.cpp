class Solution {
public:
    void Permutations(vector<int>&nums, vector<vector<int>>&v,int idx)
    {
        if(idx==nums.size())
        {
           v.push_back(nums);
           return;
        }

        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[idx],nums[i]);
            Permutations(nums,v,idx+1);
            swap(nums[idx],nums[i]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        Permutations(nums,v,0);
        return v;   
    }
};