class Solution {
    public boolean sumGame(String num) {
        
        int count1=0;
        int count2=0;
        int sum1=0;
        int sum2=0;
        for(int i=0;i<num.length();i++)
        {
            if(i < num.length()/2)
            {
                if(num.charAt(i) =='?')
                {
                    count1++;
                }
                else
                {
                    sum1 += num.charAt(i)-'0';
                }
            }
            else
            {
                    if(num.charAt(i) =='?')
                {
                    count2++;
                }
                else
                {
                    sum2 += num.charAt(i)-'0';
                }

            }
        }
        System.out.println(count1);
        System.out.println(count2);
        System.out.println(sum1);
        System.out.println(sum2);
        if(count1==0  && count2 ==0)
        {
            if(sum1==sum2)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        if((count1+count2)%2 != 0)
        {
            return true;
        }
        else
        {
            if((sum1-sum2)*2 == (count2-count1)*9 )
            {
                return false;
            }
        }
       



      return true;
    }
}