class Solution {
    public int sumOfSquares(int[] nums) {
        int sum=0;
        int n=nums.length;
        for(int i=1;i<=n;i++)
        {
            if(i != 0 && n % i ==0)
            {
                System.out.print(i);
              sum = sum + nums[i-1]*nums[i-1];
            }
        }
        return sum;
        
    }
}