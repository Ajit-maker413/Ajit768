class Solution {
    public long countVowels(String word) {
        int i=0;
        
        HashSet<Character>st=new HashSet<>();
        st.add('a');
        st.add('e');
        st.add('i');
        st.add('o');
        st.add('u');
        long res=0;
        while(i<word.length())
        {
                char ch=word.charAt(i);
                if(st.contains(ch))
                {
                    res+=(long)(word.length()-i)*(i+1);
                }
        
          
            i++;
        }
        return res;
        
    }
}