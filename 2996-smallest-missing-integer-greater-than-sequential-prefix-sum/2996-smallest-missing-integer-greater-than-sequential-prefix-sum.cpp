class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=nums[0];
        int length=0;
        int result=0;
        while(j<nums.size())
        {
            if(j-1>=0 && (nums[j]-nums[j-1]) ==1 )
            {
                sum += nums[j];
            }
            if(j-1>=0 && (nums[j]-nums[j-1]) != 1)
            {
                
               /* if(length < (j-1-i+1) )
                {
                    length=j-1-i+1;
                    result=sum;
                    sum=nums[j];
                    i=j;
                    
                }*/
                break;
            }
            j++;
            
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==sum)
            {
                sum++;
            }
        }
        return sum;

        
    }
};