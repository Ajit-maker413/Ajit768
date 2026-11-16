class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() >k)
        {
            string ss="";
            int count=0;
            int sum=0;
            for(int i=0;i<s.size();i++)
            {
                sum += s[i]-'0';
                count++;
                if(count==k)
                {
                    ss+=to_string(sum);
                    sum=0;
                    count=0;
                   
                }             
               
            }  
            if(count > 0)
            {
                ss += to_string(sum);
            }
                
            s=ss;
        }
        return s;
    }
};