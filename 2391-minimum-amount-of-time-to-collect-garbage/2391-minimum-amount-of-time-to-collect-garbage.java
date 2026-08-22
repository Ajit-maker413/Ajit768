class Solution {
  
    int time(String[] garbage, int[] travel,char ch)
    {
        int last=0;
        int count=0;
        for(int i=0;i<garbage.length;i++)
        {
            for(int j=0;j<garbage[i].length();j++)
            {
                if(garbage[i].charAt(j)==ch)
                {
                    last=i;
                    count++;
                }
            }
        }
        int time=0;
        for(int i=0;i<last;i++)
        {
            time += travel[i];
        }
        return time+count;

    }
    public int garbageCollection(String[] garbage, int[] travel) {
        int total_time=0;
         total_time +=time(garbage,travel,'G');
         total_time +=time(garbage,travel,'P');
         total_time +=time(garbage,travel,'M');
         return total_time;
        
    }
}