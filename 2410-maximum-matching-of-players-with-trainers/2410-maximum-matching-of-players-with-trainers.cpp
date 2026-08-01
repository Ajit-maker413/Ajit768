class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i=0;
        int j=0;
        int count=0;
        while(i<players.size())
        {
            if(j==trainers.size())
            { 
               break;
            }
            else if(j<trainers.size() && players[i] <= trainers[j])
            {
                count++;
                i++;
                j++;
            }
            else
            {
                j++;
            }

        }
      return count;
        
    }
};