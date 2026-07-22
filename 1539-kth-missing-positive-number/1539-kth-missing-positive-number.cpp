class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0;
        int num=1;
       int  count=0;
       int miss;
        while(i<arr.size())
        {
            if(count==k)
            {
                return miss;
            }
            if(arr[i]==num)
            {
                num++;
                i++;
            }
            else
            {
                miss=num;
                count++;
                num++;
            }
        }
        miss=arr[arr.size()-1];
        while(count<k)
        {
            miss++;
            count++;
        }
        return miss;
    }
};