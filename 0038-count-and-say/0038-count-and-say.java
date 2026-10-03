class Solution {

    String convert(StringBuilder sb){
        int count=0;
        char curr=sb.charAt(0);
        StringBuilder new_sb = new StringBuilder();
        for(int i=0;i<sb.length();i++)
        {
            if(curr==sb.charAt(i))
            {
                count++;
            }
            else
            {
                new_sb.append(count);
                new_sb.append(curr);
                count=1;
                curr=sb.charAt(i);

            }
            
        }
        new_sb.append(count);
        new_sb.append(curr);
        System.out.println(new_sb);


        return new_sb.toString();
    }
    public String countAndSay(int n) {
       StringBuilder sb = new StringBuilder("1");
       for(int i=1;i<n;i++)
       {
        sb= new StringBuilder(convert(sb));
       }
       return sb.toString();

    }  
}