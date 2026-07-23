class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int Max=weights[0];
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            if(weights[i]>Max)
            {
                Max=weights[i];
            }
            sum +=weights[i];
        }
        int ans;
        int count=0;
        int start=Max;
        int end=sum;
        int mid;
        while(start<=end)
        {
            sum=0;
            count=1;
            mid=(start+end)/2;
            for(int i=0;i<weights.size();i++)
            {
                if(sum +weights[i] <= mid)
                {
                    sum += weights[i];
                }
                else
                {
                    count++;
                    sum=weights[i];
                }
            }
            if(count>days)
            {
                start=mid+1;
            }
            else
            {
                end=mid -1;
                ans=mid;
            }
        }
        return ans;
    }
};