class Solution {
public:
    int bulbSwitch(int n) {
     
           return sqrt(n);

     /*   vector<bool>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(false);
        }
       
         for(int i=1;i<=n;i++)
         {
            int j=i;
            while(j<=n)
            {
               
                if(v[j-1]==true)
                {
                    v[j-1]=false;
                }
                else
                {
                    v[j-1]=true;
                }
                j=j+i;
            }

           
         }
         int count=0;
         for(int i=0;i<n;i++)
         {
            if(v[i])
            {
                count++;
            }
         }
         return count;        */
    }
};