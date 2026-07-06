class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=pow(2,maximumBit)-1;
        vector<int>v;
        int Xor=0;
        for(int i=0;i<nums.size();i++)
        {
            Xor=Xor^nums[i];

        }
        for(int i=nums.size()-1;i>=0;i--)
        {

            int res=Xor^n;
           // n--;
            Xor=Xor^nums[i];
            v.push_back(res);
        }
        return v;
    }
};