class Solution {
public:
    int countTriplets(vector<int>& arr) {
      vector<int>v;
      v.push_back(0);
      int Xor=0;
      for(int i=0;i<arr.size();i++)
      {
        Xor=Xor^arr[i];
        v.push_back(Xor);
      }
      int i=0;
      int count=0;
      while(i<v.size())
      {
        for(int k=i+1;k<v.size();k++)
        {
            if(v[i]==v[k])
            {
                count+=k-i-1;
            }
        }
        i++;
      }
        return count;
        
    }
};