class Solution {
public:
    bool count_prime_set(int n)
    {
        int count=0;

        while(n>0)
        {
            count += n & 1;
            n>>=1;
        }
        if(count < 2)
        {
            return false;
        }
        for(int i=2;i<count;i++)
        {
            if(count % i ==0)
            {
                return false;
            }
            else
            {
                cout<<i;
            }
        }
        return true;

    }
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++)
        {
          if(count_prime_set(i))
          {
            count++;
          }
        }
        return count;
        
    }
};