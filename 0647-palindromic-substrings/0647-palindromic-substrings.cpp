class Solution {
public:
    int countSubstrings(string s) {
        int j=0;
        int i=0;
        int count=0;
       string ss;
       while(i<s.size())
       {
       // ss+=s[j];
        string temp=s.substr(i,j-i+1);
        string rev=temp;
        reverse(rev.begin(),rev.end());
        if(rev== temp)
        {
            count++;
        }

         if(j==s.size()-1)
         {
            j=i+1;
            i++;
            //ss=ss.substr(i,j-1+1);
         }
         else
         {
            j++;
         }

       }
       return count;
        
    }
};