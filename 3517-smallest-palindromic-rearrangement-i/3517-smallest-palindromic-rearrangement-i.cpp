class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> v(26, 0);
        for (int i = 0; i < s.size(); i++) {
            v[s[i] - 'a']++;
        }
        string left;
        string middle;
        for (int i = 0; i < 26; i++) 
        {

            int count = v[i] / 2;
            while (count--) 
            {
                left += (char)(i + 'a');
            }

            if (v[i] % 2 == 1)
            {
                middle += (char)(i + 'a');
            }
        }

        string ss;
        ss = left;
        ss += middle;
        reverse(left.begin(), left.end());
        ss += left;

        /*for(int i=0;i<left.size();i++)
        {
         ss+=left[i];
        }
         for(int i=0;i<middle.size();i++)
        {
         ss+=middle[i];
        }
         for(int i=left.size()-1;i>=0;i--)
        {
         ss+=left[i];
        }*/

        return ss;
    }
};