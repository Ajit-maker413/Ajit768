class Solution {
public:
    int minOperations(int n) {
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            v.push_back((2 * i) + 1);
        }
        int s=0;
        int count=0;
        while(s<v.size()/2)
        {
            count+=n-v[s];
            s++;
        }
        return count;
    }
};