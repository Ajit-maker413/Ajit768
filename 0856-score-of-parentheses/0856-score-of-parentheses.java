class Solution {
    public int scoreOfParentheses(String s) {
        Stack<Integer>st=new Stack<>();
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            char ch =s.charAt(i);
            if(ch=='(')
            {
                st.push(0);
            }
            else
            {
               if(st.peek()==0)
               {
                st.pop();
                st.push(1);
               }
               else
               {
                int sum=0;
                while(st.peek() != 0)
                {
                    sum += st.peek();
                    st.pop();
                }
                st.pop();
                st.push(sum*2);
               }
            }
        }
while(!st.empty())
{
    count += st.peek();
    st.pop();
}
        

     return count;

        
    }
}