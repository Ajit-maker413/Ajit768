class Solution {
public:
    int reverseDegree(string s) {

        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            int op='z'-(s[i]-'a')  -'a' +1;
            sum += op*(i+1);

        }
     
        return sum;

        
    }
};