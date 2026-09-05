class Solution {
public:
    
    bool checkPlaindrome(string s,int left,int right)
    {
        while(left<=right)
        {
            if(s[left]!= s[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;

        while(i<=j)
        {
            if(j-i ==1 )
            {
                return true;
            }
           else if(s[i]!=s[j])
           {
            bool first=checkPlaindrome( s,i,j-1);
            bool second=checkPlaindrome( s,i+1,j);
            if(first || second)
            {
                return true;
            }
            else
            {
                return false;
            }

           }
           i++;
           j--;
        }
        return true;
        
    }
};