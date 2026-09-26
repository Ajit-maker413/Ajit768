class Solution {
    public String evaluate(String s, List<List<String>> knowledge) {
        HashMap<String,String> map= new HashMap<>();
        for(int i=0;i<knowledge.size();i++)
        {
            map.put(knowledge.get(i).get(0),knowledge.get(i).get(1));
        }
        StringBuilder st=new StringBuilder();
        int i=0;
        int j=0;
        while(i<s.length())
        {
           if(s.charAt(i) =='(')
           {
            StringBuilder temp=new StringBuilder();
            i++;
            while(s.charAt(i) != ')')
            {
                temp.append(s.charAt(i) );
                i++;
            }
            if(map.containsKey(temp.toString()))
            {
                String ans=map.get(temp.toString());
                st.append(ans);
            }
            else
            {
                st.append('?');
            }
            i++;


           }
           else
           {
            st.append(s.charAt(i));
            i++;
           }
           
        }
        return st.toString();
        
    }
}