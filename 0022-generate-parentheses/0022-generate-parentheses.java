class Solution {
    boolean check(String s)
    {
        Stack<Character>st =new Stack();
        int i=0;
        while(i<s.length())
        {
            if(s.charAt(i)=='(')
            {
                st.push('(');
            }
            else
            {
                if( st.empty() || st.peek() != '(')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            i++;
        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }

    void opeartion(StringBuilder st,int n,List<String>ans)
    {
        if(st.length()==2*n)
        {
            if(check(st.toString()))
            {
              ans.add(st.toString());
            }
            return ;
        }
        st.append('(');
        opeartion(st,n,ans);
        st.deleteCharAt(st.length()-1);
        st.append(')');
        opeartion(st,n,ans);
        st.deleteCharAt(st.length()-1);
        
    }

    public List<String> generateParenthesis(int n) {
        List<String>ans= new ArrayList<>();
        StringBuilder st=new StringBuilder();
        opeartion(st,n,ans);
        return ans;
        
    }
}