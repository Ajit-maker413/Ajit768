class Solution {
public:
     int res;
     void fab(int n,int first,int second)
     {
        if(n==0)
        {
            res=first;
            return;
        }
        
        fab(n-1,second,first+second);

     }
    int fib(int n) {
        fab(n,0,1);
        return res;
        
    }
};