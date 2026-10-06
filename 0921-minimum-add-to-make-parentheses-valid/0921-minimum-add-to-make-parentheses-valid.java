class Solution {
    public int minAddToMakeValid(String s) 
    {
        Stack<Character>st=new Stack();
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)==')')
            {
                if(!st.empty() && st.peek()=='(' )
                {
                    st.pop();
                }
                else
                {
                    count++;
                }

            }
            else
            {
                st.push(s.charAt(i));
            }
        }
        while(!st.empty())
        {
            st.pop();
            count++;
        }
        return count;   
    }
}