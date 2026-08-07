class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int i=0;
        int sum=0;
        
        int j=piles.size()-1;
        int k=piles.size()-2;
        while(i<k)
        {
            sum +=piles[k];
            j=k-1;
            k=j-1;
            i++;

        }
        
        return sum;
        
    }
};