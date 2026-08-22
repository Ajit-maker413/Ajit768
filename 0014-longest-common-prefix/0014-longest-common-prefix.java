class Solution {
    public String longestCommonPrefix(String[] strs) {
        String longest=strs[0];
        for(int i=0;i<strs.length;i++)
        {
            if(longest.length()<strs[i].length())
            {
                longest=strs[i];
            }
        }
        System.out.print(longest);
       for(int i=0;i<strs.length;i++)
        {
            StringBuilder sb =new StringBuilder();
            for(int j=0;j<longest.length() & j< strs[i].length();j++)
            {
                if(strs[i].charAt(j)==longest.charAt(j))
                {

                    sb.append(strs[i].charAt(j));
                }
                else
                {
                    break;
                }
            }
            longest=sb.toString();
            

        }
     return longest;
        
    }
}