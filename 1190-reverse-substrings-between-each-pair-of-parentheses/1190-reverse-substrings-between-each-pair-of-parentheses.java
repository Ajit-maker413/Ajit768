class Solution {
    public String reverseParentheses(String s) {
        Stack<Character> st= new Stack<>();
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)==')')
            {
                StringBuilder sb= new StringBuilder();
                while(!st.empty() && st.peek() != '(')
                {
                    sb.append(st.peek());
                    st.pop();
                }
               
                st.pop();
                for(int j=0;j<sb.length();j++)
                {
                    st.push(sb.charAt(j));
                }
            }
            else
            {
                st.push(s.charAt(i));

            }
        }
        StringBuilder new_sb = new StringBuilder();
        while(!st.empty())
        {
            new_sb.append(st.peek());
            st.pop();
        }
        new_sb.reverse();


        return new_sb.toString();
        
    }
}