class Solution {
public:
    int sum=0;
    int Solve(long long n)
    {
        int temp=0;
        while(n>0)
        {
            int rem=n%10;
            if(rem==0)
            {
                n=n/10;
                continue;
            }
            else
            {
                temp=temp*10+rem;
                sum+=rem;
                n=n/10;
            }
        }
        return temp;
    }
    long long sumAndMultiply(int n) {
       
       int temp=Solve(n);
       sum=0;
       long long res=(long long) Solve(temp)*sum;
       return res;
        
    }
};