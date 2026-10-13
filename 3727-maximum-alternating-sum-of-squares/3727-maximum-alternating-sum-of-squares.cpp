class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
       
        int i=0;
        int j=nums.size()-1;
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                nums[i]=nums[i]*-1;
            }
        }
         sort(nums.begin(),nums.end());
        while(i<j)
        {
            sum += nums[j]*nums[j] - nums[i]*nums[i];
            cout<<nums[j]*nums[j] - nums[i]*nums[i];
            
          /*  cout<< nums[j]<< nums[j];
            cout<<nums[i]<<nums[i];*/
            i++;
            j--;

        }
        if(nums.size() %2 != 0)
        {
            sum += nums[i]*nums[i];
        }
        return sum;
        
    }
};