class Solution {
    public int maxFreqSum(String s) {
        HashMap<Character,Integer>map=new HashMap<>();
        for(int i=0;i<s.length();i++)
        {
            if(map.containsKey(s.charAt(i)))
            {
                map.put(s.charAt(i),map.get(s.charAt(i))+1);
            }
            else
            {
                map.put(s.charAt(i),1);
            }
        }
        int maxV=0;
        int maxC=0;
        for(Map.Entry<Character,Integer>entry: map.entrySet())
        {
             char ch=entry.getKey();
             int val=entry.getValue();
             if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
             {
                if(maxV<val)
                {
                    maxV=val;
                }
             }
             else
             {
                 if(maxC<val)
                {
                    maxC=val;
                }

             }
        }
        return maxV+maxC;


        
    }
}