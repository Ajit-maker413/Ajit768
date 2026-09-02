class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool even=true;
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i] % 2==0)
            {
                continue;
            }
            else
            {
                bool flag =false;
                for(int j=0;j<nums1.size();j++)
                {
                    if(i!=j && (nums1[i]-nums1[j]) % 2 == 0)
                    {
                        flag=true;
                        break;
                    }
                }
                if(!flag)
                {
                    even=false;
                    break;
                }
            }
        }
        bool odd=true;
          for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i] % 2!=0)
            {
                continue;
            }
            else
            {
                bool flag =false;
                for(int j=0;j<nums1.size();j++)
                {
                    if(i!=j && (nums1[i]-nums1[j]) % 2 != 0)
                    {
                        flag=true;
                        break;
                    }
                }
                if(!flag)
                {
                    odd=false;
                    break;
                }
            }
        }
        if(even || odd)
        {
            return true;
        }
        return false;
        
    }
};