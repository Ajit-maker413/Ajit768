class Solution {
public:
    vector<int>v;
    int maxProduct(int n) {
        while(n>0)
        {
            int rem=n%10;
            n=n/10;
            v.push_back(rem);
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        sort(v.begin(),v.end());


      return v[v.size()-1]*v[v.size()-2];  
    }
};