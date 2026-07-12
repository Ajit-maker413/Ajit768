class Solution {
public:
    int minSwaps(string s) {
        int open=0;
        int close=0;
        int pair=0;
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
            {
                st.push('[');
            }
            if(s[i]==']' && !st.empty())
            {
                st.pop();
                pair++;
            }
           
                if(s[i]=='[')
                {
                    open++;
                }
                else
                {
                    close++;
                }

        }

        cout<<open<<" "<<close<<" "<<pair;
        open=open-pair;
        int rem=open%2;
        open=open/2;
        if(rem>0)
        {
            open++;
        }
    
        return open;
    }
};