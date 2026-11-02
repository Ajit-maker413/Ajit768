class Solution {
public:
    int sumBase(int n, int k) {
        int sum=0;
        int i=0;
        int temp=0;
        while(n>0)
        {
             int rem=n%k;
             temp = temp*10+rem;
             sum+=rem;
            
             n=n/k;
        }
        cout<<temp;
        return sum;
        
    }
};