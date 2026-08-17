class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>L;
        vector<int>R;
        int Lsum=0;
        int Rsum=0;

        for(int i=0;i<nums.size();i++)
        {
            L.push_back(Lsum);
            Lsum+=nums[i];
          
        }
         for(int i=nums.size()-1;i>=0;i--)
        {
            R.push_back(Rsum);
            Rsum +=nums[i];
        }
         reverse(R.begin(), R.end());
        for(int i=0;i<nums.size();i++)
        {
           if(L[i]==R[i])
           {
            return i;
           }
        }
        return -1;
        
    }
};