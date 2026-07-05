class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int Xor=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            Xor=Xor^nums[i];
        }
        int count=0;
        while( (Xor&1) != 1)
        {
            count++;
            Xor>>=1;
        }
        int n=0,m=0;
         for(int i=0;i<nums.size();i++)
         {
            int temp=nums[i];
            if( (temp>>count & 1) == 1)
            {
                n=n^nums[i];
            }
            else
            {
                m=m^nums[i];
            }
         }
         v.push_back(n);
         v.push_back(m);

         return v;
    }
};