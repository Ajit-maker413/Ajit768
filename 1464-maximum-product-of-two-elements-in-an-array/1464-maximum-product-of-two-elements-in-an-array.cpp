class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]-1<0)
            {
                neg.push_back(nums[i]-1);
            }
            else{
                pos.push_back(nums[i]-1);
            }
        }
        sort(neg.begin(),neg.end());
        sort(pos.begin(),pos.end());
        int n=neg.size();
        int m=pos.size();
        int negProduct=1;
        int posProduct=1;
        bool found=false;
        if(neg.size()>=2)
        {
          found=true;
          negProduct=neg[n-1]*neg[n-2];
        }
         if(pos.size()>=2)
        {
          posProduct=pos[m-1]*pos[m-2];
        }
        if(found)
        {
          return max(negProduct,posProduct);
        }
        else
        {
            return posProduct;
        }
        

    }
};