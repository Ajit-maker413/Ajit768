class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        ArrayList<Integer>list=new ArrayList<>();
        int i=0;
        int j=0;
        int pro=1;
        int count=0;
           if (k <= 1)
            return 0;
        while(j<nums.length)
        {
           
            pro=pro*nums[j];
             list.add(nums[j]);
                while(pro>=k)
                {
                    pro=pro/list.get(i);
                    i++;
                }
                int n = list.size() -i ;
                count += n;
                j++;
           
        }
        return count;
   
        
    }
}