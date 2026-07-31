class Solution {
public:
    vector<int> partitionLabels(string s) {
        int i=0;
        vector<int>v;
        while(i<s.size())
        {
            unordered_map<char,int>um;
            int target=i;
            int ans;
            int j=i+1;
            string temp;
            um[s[i]]=1;
            while(j<s.size())
            {
                if(um.count(s[j]))
                {
                    for(int k=0;k<temp.size();k++)
                    {
                        um.insert({temp[k],1});
                    }
                    temp.clear();
                    target=j;
                }
               else
                {
                    temp+=s[j];
                }
                j++;

            }
            v.push_back(target-i+1);
            i=target+1;

        }
        return v;
        
    }
};