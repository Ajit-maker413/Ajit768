class Solution {
public:
    int maxDepth(string s) {
        int Max=INT_MIN;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] =='(')
            {
                count++;
            }
            /*if(s[i] >= '0'  && s[i] <='9')
            {
                Max=max(Max,count);
            }*/
            if(s[i] == ')')
            {
                Max=max(Max,count);
                count--;
                
            }

        }
        if(Max==INT_MIN)
        {
            return count;
        }
        return Max;
    }
};