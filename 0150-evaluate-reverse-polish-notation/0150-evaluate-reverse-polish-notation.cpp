class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++)
        {
            string ch=tokens[i];
        
            if(ch=="+")
            {
                int nums1=st.top();
                st.pop();
                int nums2=st.top();
                st.pop();
                int res=nums1+nums2;
                st.push(res);
            }
            else  if(ch=="-")
            {
                int nums1=st.top();
                st.pop();
                int nums2=st.top();
                st.pop();
                int res=nums2-nums1;
                st.push(res);
            }
            else  if(ch=="*")
            {
                int nums1=st.top();
                st.pop();
                int nums2=st.top();
                st.pop();
                int res=nums1*nums2;
                st.push(res);
            }
            else  if(ch=="/")
            {
                int nums1=st.top();
                st.pop();
                int nums2=st.top();
                st.pop();
                int res=nums2/nums1;
                st.push(res);
            }
            else
            {
              st.push(stoi(ch));
            }
          
        }
        return st.top();
        
    }
};