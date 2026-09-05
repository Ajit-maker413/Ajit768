class Solution {
public:
    int countSubstrings(string s) {
        int i=0;
        int j=0;
        int count=0;
        while(i<s.size())
        {
            string temp=s.substr(i,j-i+1);
            string rev=temp;
            reverse(rev.begin(),rev.end());
            if(rev==temp)
            {
                count++;
            }
            if(j==s.size()-1)
            {
                
                j=i+1;
                i++;
            }
            else
            {
                j++;
            }
        }
        return count;
        
    }
};