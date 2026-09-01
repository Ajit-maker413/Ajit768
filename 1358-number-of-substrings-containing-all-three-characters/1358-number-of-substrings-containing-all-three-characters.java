class Solution {
    public int numberOfSubstrings(String s) {
        HashMap<Character,Integer>map=new HashMap<>();
        int i=0;
        int j=0;
        int count=0;
        int n=s.length();
        map.put('a',0);
        map.put('b',0);
        map.put('c',0);
        while(j<s.length())
        {
            char ch=s.charAt(j);
            if(map.containsKey(ch) )
            {
                map.put(ch,map.get(ch)+1);
            }
            while(map.get('a') >0 && map.get('b')>0 && map.get('c')>0)
            {
                char new_ch=s.charAt(i);
                count += n-j;
              
                map.put(new_ch,map.get(new_ch)-1);
                i++;
            }
            j++;
        }
         return count;
        
    }
}