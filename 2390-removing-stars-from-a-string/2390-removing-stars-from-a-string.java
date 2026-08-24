class Solution {
    public String removeStars(String s) {
        StringBuilder sb = new StringBuilder();
        
       
       int i=0;
       int j=0;
        while(i<s.length())
        {
           if(s.charAt(i)=='*')
           {
            sb.deleteCharAt(j-1);
            j--;
            i++;
           }
           else
           {
            sb.append(s.charAt(i));
            j++;
            i++;
           }
        }
      return sb.toString();
        
    }
}