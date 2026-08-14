class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i = 0;
        int j = i;
        int length = 0;

        unordered_map<char, int> um;
        while (j < s.size())
         {
            if (!um.count(s[j]))
             {
                um[s[j]] = 1;
            } 
            else 
            {
                if (um[s[j]] + 1 > 2) 
                {

                    while (s[i] != s[j]) 
                    {
                        um[s[i]]--;
                        i++;
                    }
                    um[s[i]]--;
                    i++;
                } 
                um[s[j]]++;
                  
             }
            length = max(length, j - i + 1);
            j++;
    
         }
            return length;
        }
    };