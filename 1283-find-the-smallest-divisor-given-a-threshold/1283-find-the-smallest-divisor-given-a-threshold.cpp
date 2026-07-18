class Solution {
public:
   int ans=INT_MAX;
    bool solve(vector<int>&nums,int n,int &threshold)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum += ceil((double)nums[i] / n);

        }
        cout<< n<<"  "<<sum<<" "<<endl;
        if(sum<=threshold)
        {
            ans=n;
            return true;
        }
        return false;

    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());

        int start=1;
        int end=nums[nums.size()-1];
       
        while(start<=end)
        {
          int mid=(start+end)/2;
         if( solve(nums,mid,threshold) )
         {
            end=mid-1;
         }
         else
         {
            start=mid+1;
         }
          
        }
        return ans;
        
    }
};