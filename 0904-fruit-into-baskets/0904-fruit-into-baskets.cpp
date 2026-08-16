class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0;
        int j=0;
        unordered_map<int,int>um;
        int length=0;
        while(j<fruits.size())
        {
            if(!um.count(fruits[j]))
            {
                um[fruits[j]] =1;

            }
            else
            {
                um[fruits[j]]++;
            }

            if(um.size()>2)
            {
                while(um.size()>2)
                {
                    um[fruits[i]]--;
                       
                     if (um[fruits[i]] == 0)
                     {
                         um.erase(fruits[i]);
                     }
                       
                    i++;
                }
    
            }
            length=max(length,j-i+1);
            j++;
        }
        return length;
    }
};