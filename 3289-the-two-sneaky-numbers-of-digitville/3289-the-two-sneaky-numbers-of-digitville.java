class Solution {
    public int[] getSneakyNumbers(int[] nums) {
        int []arr = new int[2];
        int j=0;
        HashMap<Integer,Integer>um=new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            if(um.containsKey(nums[i]))
            {
              arr[j++]=nums[i];
            }
            else
            {
                um.put(nums[i],1);
            }
        }
        return arr;
        
    }
}