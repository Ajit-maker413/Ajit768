class Solution {
    public int pivotInteger(int n) {
        int []arr=new int [n];
        int sum=0;
        int last= (n*(n+1) )/2;
        for(int i=1;i<=n;i++)
        {
            
            int inc=((i+1)*i)/2;
            int pre=((i-1)*i)/2;
            int exc= last- pre;
            if(inc==exc)
            {
                return i;
            }

        }
        return -1;
    }
}