class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        long long prev_sum=0;
        vector<long long>v;

        int Max=0;
        for(int i=0;i<nums.size();i++)
        {
            Max=max(Max,nums[i]);
            prev_sum +=nums[i]+Max;
            v.push_back(prev_sum);

        }
       return v; 
    }
};