class Solution {
public:
  vector<int>v;
  bool found =false;
  int binarySearch(vector<int>& nums,int start,int end,int target)
  {
    int i=start;
    int j=end;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(nums[mid]==target && i!=mid )
        {
           v.push_back(i+1);
           v.push_back(mid+1);
           found=true;
           return end;
        }
       else if(nums[mid]>target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }


    }
    return j;
    
  }


    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0;
        int end=numbers.size()-1;
        
        for(int i=0;i<numbers.size();i++)
        {
         
            end=binarySearch(numbers,i,end,target-numbers[i]);
            if(found)
            {
                break;
            }
            
        }
      return v;
    }
};