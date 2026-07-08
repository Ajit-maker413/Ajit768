class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
          sum+=nums[i];
          v.push_back(sum);
        }
        sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int s=max(0,i-nums[i]);
            //cout<<"s= "<<s<<"i "<<i<<endl;
            if(s==0)
            {
               sum+=v[i];
            }
            else
            {
                sum+=v[i]-v[s-1];
            }
        }
        return sum;
    }
};