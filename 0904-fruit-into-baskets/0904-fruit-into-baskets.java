class Solution {
    public int totalFruit(int[] fruits) {
        int i=0;
        int j=0;
        int res=-1;
        HashMap<Integer,Integer>map=new HashMap<>();
        while(i<fruits.length && j <fruits.length)
        {
            if(map.containsKey(fruits[j]))
            {
                map.put(fruits[j],map.get(fruits[j])+1);
            }
            else
            {
                 map.put(fruits[j],1);
            }
            if(map.size() >2)
            {
             
              while(map.size() > 2)
              {
                  map.put( fruits[i] , map.get(fruits[i])-1);
                  if(map.get(fruits[i]) == 0)
                  {
                    map.remove(fruits[i]);
                  }
                  i++;

              }
             
            }
             int len=j-i+1;
              if(res<len)
              {
                res=len;
              }
            j++;

        }
        if(res==-1)
        {
            return 0;
        }
        return res;
        
    }
}