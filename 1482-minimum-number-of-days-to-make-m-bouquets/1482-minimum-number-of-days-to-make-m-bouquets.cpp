class Solution {
public:
  bool findBloom(vector<int>& bloomDay, int mid, int &k, int &m)
{
    int i = 0;
    int countB = 0;

    while (i < bloomDay.size())
    {
        int count = 0;

        while (i < bloomDay.size() && bloomDay[i] <= mid && count < k)
        {
            count++;
            i++;
        }

        if (count == k)
            countB++;

        if (countB >= m)
            return true;

        // Skip the flower that broke adjacency
        while (i < bloomDay.size() && bloomDay[i] > mid)
            i++;
    }

    return false;
}
 
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size())
        return -1;
        int start = *min_element(bloomDay.begin(), bloomDay.end());
    
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int mid;
        while(start<=end)
        {
             mid= start + (end - start) / 2;
           if(findBloom( bloomDay, mid,k,m) )
           {
              end=mid-1;
           }
           else
           {
            start=mid+1;
           }
            
        }
        return start;
    }
};