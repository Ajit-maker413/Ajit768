class Solution {
    public int maxFreqSum(String s) {
        HashMap<Character,Integer>um=new HashMap<>();
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(um.containsKey(ch))
            {
                um.put(ch,um.get(ch)+1);
            }
            else
            {
                um.put(ch,1);
            }
        }
    
        int maxV=0;
        int maxC=0;
        for(Map.Entry<Character,Integer> entry : um.entrySet())
        {
            char ch=entry.getKey(); 
            int freq = entry.getValue();
            if(ch =='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u')
            {
                maxV=Math.max(maxV,freq);
            }
            else
            {
                 maxC=Math.max(maxC,freq);
            }
        }

        return maxV+maxC;
    }
}