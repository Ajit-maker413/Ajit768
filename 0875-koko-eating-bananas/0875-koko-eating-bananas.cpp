class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int Max=INT_MIN;
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i]>Max)
            {
                Max=piles[i];
            }
        }
        int start=1;
        int end= Max;
        int mid;
        int ans=0;
        while(start<=end)
        {
            mid=(start+end)/2;
            long long hour=0;
            for(int i=0;i<piles.size();i++)
            {
                  hour += piles[i]/mid;
                  if(piles[i]%mid >0)
                  {
                    hour++;
                  }
            }
            if(hour > h)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
                ans=mid;
            }
        }
        return  ans;
    }
};