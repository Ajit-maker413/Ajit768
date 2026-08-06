class Solution {
public:
    int numSplits(string s) {
        unordered_map<char,int>um1;
        unordered_map<char,int>um;

        for(int i=0;i<s.size();i++)
        {
            if(!um.count(s[i]))
            {
                um[s[i]]=1;
            }
            else
            {
                um[s[i]]++;
            }
        }
        if(um.size()==1)
        {
            return um[s[0]]-1;
        }

        int count=0;
        for(int i=0;i<s.size()-1;i++)
        {
            
                um[s[i]]--;
            


            if(um[s[i]] ==0)
            {
                um.erase(s[i]);
            }


            if(!um1.count(s[i]))
            {
                um1[s[i]]=1;
            }
            else
            {
                um1[s[i]]++;
            }

            if(um.size()==um1.size())
            {
                count++;
            }
        }
        return count;
    }
};