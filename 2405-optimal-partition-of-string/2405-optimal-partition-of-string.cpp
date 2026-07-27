class Solution {
public:
    int partitionString(string s) {
        vector<string>st;
        int i=0;
        int count=0;
        while(i<s.size())
        {
            vector<int>v(26,0);
            int j=i;
            while(j<s.size())
            {

              v[s[j]-'a']++;
             
              if(v[s[j]-'a'] >1)
              {
                count++;
                i=j;
                break;
              }
              j++;
            }
            if(j==s.size())
            {
                count++;
                break;
            }

        }
        return count;    
    }
};