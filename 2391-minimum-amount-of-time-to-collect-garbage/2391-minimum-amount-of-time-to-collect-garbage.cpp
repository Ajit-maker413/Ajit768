class Solution {
public:

    int  collection_time(vector<string>& garbage, vector<int>& travel,char ch) 
    {
        int count=0;
        int time=0;
        int last=0;
        for(int i=0;i<garbage.size();i++)
        {
            for(int k=0;k<garbage[i].size();k++)
            {
                if(garbage[i][k] == ch)
                {
                    last=i;
                    count++;
                }
            }

        }
        for(int i=0;i<last;i++)
        {
            time+=travel[i];
        }
        return time+count;
    }
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
     int time=0;
      time +=  collection_time(garbage,travel,'G');
      time +=  collection_time(garbage,travel,'M');
      time +=  collection_time(garbage,travel,'P');

    return time;
        
    }
};