class Solution {
    public void moveZeroes(int[] nums) {
        int i=0;
        int j=0;
        while(i<nums.length)
        {
            
            if(nums[i]==0 )
            {
                if(j<i)
                {
                    j=i;
                }

                while( j<nums.length)
                {

                    if(nums[j] != 0)
                    {
                        int temp=nums[i];
                        nums[i]=nums[j];
                        nums[j]=temp;
                        break;

                    }
                    else
                    {
                        j++;
                    }
                    
                }
                
            }
            i++;
        }

        
    }
}