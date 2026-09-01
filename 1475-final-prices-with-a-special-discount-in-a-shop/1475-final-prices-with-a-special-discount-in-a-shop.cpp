class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>v;
        for(int i=0;i<prices.size();i++)
        {
            bool flag =false;
            int temp;
            
            for(int j=i+1;j<prices.size();j++)
            {
              if(prices[j]<=prices[i])
              {
                flag=true;
                temp=prices[j];
                break;
              }
            }
            if(flag)
            {
                v.push_back(prices[i]-temp);
            }
            else
            {
                v.push_back(prices[i]);
            }
        }
        return v;
        
    }
};