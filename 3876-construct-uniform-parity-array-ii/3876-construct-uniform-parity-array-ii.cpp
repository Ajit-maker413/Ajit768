class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool res=false;
        int i=0;
        int j=0;
        int smallOdd=INT_MAX;
        int smallEven=INT_MAX;
        int evenIndex=0;
        int oddIndex=0;
        while(j<nums1.size())
        {
          if(nums1[j] % 2 != 0 && nums1[j]<smallOdd)
          {
             smallOdd=nums1[j];
             oddIndex=j;
          }
          if(nums1[j] % 2 == 0 && nums1[j]<smallEven)
          {
             smallEven=nums1[j];
             evenIndex=j;
          }
          j++;
        }
     /*   cout<<smallEven;
        cout<<evenIndex;
        cout<<smallOdd;
        cout<<oddIndex;*/
        j=0;
        vector<char>odd;
        bool oddRes =true;
        while(i<nums1.size())
        {
           if(nums1[i] % 2 != 0)
           {
            odd.push_back('t');
           }
           else
           {
                if(nums1[i]>smallOdd && (nums1[i]-smallOdd) % 2 != 0)
                {
                    odd.push_back('t');
                }
                else
                {
                    oddRes=false;
                    odd.push_back('f');
                }

            }
           
           i++;
        }
        bool evenRes =true;
        vector<char>even;
        i=0;
        while(i<nums1.size())
        {
           if(nums1[i] % 2 == 0)
           {
            even.push_back('t');
           }
           else
           {
                if(nums1[i]>smallEven && (nums1[i]-smallEven) % 2 == 0)
                {
                    even.push_back('t');
                }
                else
                {
                    evenRes=false;
                    even.push_back('f');
                }

            }
           
           i++;
        }
       /*for(int i=0;i<odd.size();i++)
        {
            cout<<odd[i];
        }
        cout<<endl;
        for(int i=0;i<even.size();i++)
        {
            cout<<even[i];
        }*/
        if(evenRes || oddRes)
        {
            return true;
        }




        return false;
        
    }
};