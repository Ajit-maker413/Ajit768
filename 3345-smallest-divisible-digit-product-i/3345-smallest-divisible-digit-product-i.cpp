class Solution {
public:
    int smallestNumber(int n, int t) {
       
        while(1)
        {
            int pro=1;
            int temp=n;
            while(temp>0)
            {
                int rem=temp % 10;
                pro=pro*rem;
                temp=temp/10;
            }
            if(pro % t ==0)
            {
               return n;
            } 
            n++;

        }
        return 0;
        
    }
};