class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<2*n;i++)
        {
            v.push_back(0);
        }
        for(int i=0;i<2*nums.size();i++)
        {
            v[i]=nums[i%n];
        }
        return v;

        
    }
};