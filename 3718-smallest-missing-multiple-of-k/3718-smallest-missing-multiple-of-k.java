class Solution {
    public int missingMultiple(int[] nums, int k) {
        HashMap<Integer,Integer>map=new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            if(map.containsKey(nums[i]))
            {
                map.put(nums[i],map.get(nums[i])+1);
            }
            else
            {
                map.put(nums[i],1);
            }
        }
        int i=1;
        while(true)
        {
            int pro=k*i;     
            if(!map.containsKey(pro))
            {
                return pro;

            }
            else
            {
                i++;
            }
        }
    
        
    }
}