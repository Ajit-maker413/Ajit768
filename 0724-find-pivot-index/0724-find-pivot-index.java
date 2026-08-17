class Solution {
    public int pivotIndex(int[] nums) {
     ArrayList<Integer>left=new ArrayList<>();
     ArrayList<Integer>right=new ArrayList<>();
     int sum=0;
     for(int i=0;i<nums.length;i++)
     {
        left.add(sum);
        sum += nums[i];
     }
     sum=0;
     for(int i=nums.length-1;i>=0;i--)
     {
        right.add(sum);
        sum += nums[i];
     }
     Collections.reverse(right);
      for(int i=0;i<nums.length;i++)
      {
        if(left.get(i).equals(right.get(i)))
        {
            return i;
        }
      }
     return -1;

        
    }
}