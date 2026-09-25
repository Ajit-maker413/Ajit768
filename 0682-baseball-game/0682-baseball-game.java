class Solution {
    public int calPoints(String[] operations) {
       Stack<Integer>st=new Stack<>();
        for(int i=0;i<operations.length;i++)
        {
       
            if(operations[i].equals("+"))
            {
                int num1=st.peek();
                st.pop();
                int num2=st.peek();
                st.pop();
                st.push(num2);
                st.push(num1);
                st.push(num1+num2);
            }
        
            else if(operations[i].equals("D"))
            {
                st.push(st.peek()*2);
            }
            else if(operations[i].equals("C"))
            {
                st.pop();
            }
            else
            {
                int temp=0;
                int j=0;
                 if(operations[i].charAt(0)=='-')
                {
                  j=1;
                }

                
                while( j<operations[i].length())
                {
                    temp=temp*10+operations[i].charAt(j)-'0';
                    j++;

                }
                if(operations[i].charAt(0)=='-')
                {
                  temp=temp*-1;
                }
                st.push(temp);
            }
        }
        int sum=0;
        while(!st.empty())
        {
           sum+= st.peek();
           st.pop();
        }
        return sum;

        
    }
}