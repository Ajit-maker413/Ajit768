class Solution {
    public int maximumGap(int[] nums) {
        int i=0;
        int j=1;
        int res=0;
        Arrays.sort(nums);
        while(i< nums.length && j<nums.length )
        {
            if(nums[i]<nums[j])
            {
                int temp=nums[j]-nums[i];
                if(res<temp)
                {
                    res=temp;
                }
            }
            i++;
            j++;
        }
         
        return res;
    }
}