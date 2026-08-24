class Solution {
    public List<String> stringSequence(String target) {
        StringBuilder sb= new StringBuilder();
        List<String> list = new ArrayList<>();
        int j=0;
        for(int i=0;i<target.length();i++)
        {
           char ch='a';
           sb.append(ch);
           list.add(sb.toString());


         
            while(sb.charAt(j) != target.charAt(i))
            {
                if(sb.charAt(j) =='z')
                {
                    sb.setCharAt(j,'a');
                    

                }
                else
                {
                    sb.setCharAt(j,  (char)( sb.charAt(j) + 1 ));
                   
                }
                 list.add(sb.toString());
               
            }
           
           j++;
           
        }
        return list;
        
    }
}