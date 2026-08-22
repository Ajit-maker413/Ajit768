class Solution {
    public boolean checkDivisibility(int n) {
        int pro=1;
        int sum=0;
        int temp=n;
        while(temp>0)
        {
            int rem=temp%10;
            temp=temp/10;
            sum=sum+rem;
            pro=pro*rem;

        }
        System.out.println(sum);
        System.out.println(pro);
        if(n % (sum+pro) ==0)
        {
            return true;
        }
        return false;
        
    }
}