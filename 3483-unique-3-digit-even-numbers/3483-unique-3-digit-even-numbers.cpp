class Solution {
public:
    int totalNumbers(vector<int>& digit) {
        set<int>st;
        bool arr[digit.size()];
        for(int i=0;i<digit.size();i++)
        {
            arr[i]=true;
        }
        int n=digit.size();

        for(int i=0;i<n;i++)
        {
          
            if(digit[i]!=0)
            {
                for(int j=0;j<n;j++)
                {
                    if(j==i)
                    {
                        continue;
                    }
                    for(int k=0;k<n;k++)
                    {
                        if(k==i || k==j ) 
                        {
                            continue;
                        }
                        if(digit[k] %2 == 0)
                        {
                            int num=digit[i]*100+digit[j]*10+digit[k];
                            st.insert(num);
                        }
                    }
                }
              
            }
        }
        
        return st.size();
        
    }
};