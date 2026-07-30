class Solution {
public:
    int minimumPushes(string word) {
        int count=0;
        int push=1;
        int ans=0;
        for(int i=0;i<word.size();i++)
        {
            count++;
            ans+=push;
            if(count==8)
            {
                push++;
                count=0;
            }
        }
        return ans;
        
    }
};