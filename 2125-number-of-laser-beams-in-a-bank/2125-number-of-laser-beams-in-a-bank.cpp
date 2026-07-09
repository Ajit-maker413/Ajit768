class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
     int count=0;
     vector<int>v;
     for(int i=0;i<bank.size();i++)
     {
        int count=0;
        for(int j=0;j<bank[i].size();j++)
        {
          if(bank[i][j] == '1')
          {
            count++;
          }
        }
        if(count != 0)
        {
          v.push_back(count);
        }
         
       
     }
     int sum=0;
     int i=0;
     int j=1;
     while(j<v.size())
     {
        sum+=v[i]*v[j];
        i++;
        j++;
     }
    



     return  sum;
    }
};