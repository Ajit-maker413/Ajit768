class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int j=0;
        string res;
        for(int i=0;i<s.size();i++)
        {
            if(j<spaces.size() && i==spaces[j])
            {
                res+=" ";
                res+=s[i];
                j++;
            }
            else
            {
                res+=s[i];
            }

        }
        return res;
    }
};