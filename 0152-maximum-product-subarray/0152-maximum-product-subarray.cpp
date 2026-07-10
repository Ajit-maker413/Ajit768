class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int left=1;
        int right=1;
        int MaxPro=0;
        if(nums.size()==1)
        {
            return nums[0];
        }
        while(i<nums.size() && j>= 0)   
        {
           left=left*nums[i];
           right=right*nums[j];
           MaxPro= max(MaxPro,max(left,right));
           if(left==0)
           {
            left=1;
           }
           if(right==0)
           {
            right=1;
           }
           i++;
           j--;


        }
        return MaxPro;
        
    }
};