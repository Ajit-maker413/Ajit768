class Solution {
public:
    int gcd(int a,int b)
    {
        int res=0;
        for(int i=1;i<=min(a,b);i++)
        {
            if(a %i ==0 && b%i ==0)
            {
                res= max(res,i);
            }
        }
        return res;
    }
    int gcdOfOddEvenSums(int n) {
        int odd=0,even=0;
      int count=0;
      int i=1;
      while(count<n)
      {
        if(i%2 !=0)
        {
            odd+=i;
            count++;
        }
        i++;
      }
      count=0,i=1;
       while(count<n)
      {
        if(i%2 ==0)
        {
            even+=i;
            count++;
        }
        i++;
      }
        cout<<even<<" "<<odd;
      return  gcd(even,odd);
    }
};