class Solution {
    public String shortestBeautifulSubstring(String s, int k) {
        int count = 0;
        int i = 0;
        int j = 0;
        int m=0;
        int n=0;
        int len = Integer.MAX_VALUE;
        while (j < s.length()) 
        {
            char ch = s.charAt(j);
            if (ch == '1') {
                count++;
            }
           
                while (count == k) {
                    if (j - i + 1 < len ||  (j - i + 1 == len && s.substring(i, j + 1).compareTo(s.substring(m, n + 1)) < 0))
                    {
                        len = j - i + 1;
                        m=i;
                        n=j;
                        System.out.println(m);
                        System.out.println(n);
                    }
                    if (s.charAt(i) == '1')
                     {
                        count--;
                    }
                   
                    i++;
                }

            j++;
        }
        if(len==Integer.MAX_VALUE)
        {
            return "";
        }

        String str=s.substring(m,n+1);
        return str;

    }
}