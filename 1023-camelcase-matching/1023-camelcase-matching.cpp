class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool>v;
        for(int i=0;i<queries.size();i++)
        {
            int k=0;
            int j=0;
            bool flag=true;
            while(j<queries[i].size())
            {
                if( k < pattern.size() && queries[i][j] == pattern[k])
                {
                         
                    k++;
                }
               else if(isupper(queries[i][j]))
                {
                    
                    flag=false;
                    break;
                  
                }
                j++;
            }
            if(flag  && k == pattern.size())
            {
                v.push_back(true);
            }
            else
            {
                v.push_back(false);
            }

        }
        return v;

        
    }
};