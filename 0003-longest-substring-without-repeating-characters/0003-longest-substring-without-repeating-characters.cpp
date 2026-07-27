class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int Max=0;
      
        for (int i = 0; i < s.size(); i++)
         {
            vector<int> v(256, 0);

            for (int j = i; j < s.size(); j++)
             {
                v[s[j]] +=1 ;
                
                if(v[s[j]]>1)
                {
                    break;
                }
                
                    Max = max(Max,j-i+ 1);
            
            }
        }
        return Max;
    }
};