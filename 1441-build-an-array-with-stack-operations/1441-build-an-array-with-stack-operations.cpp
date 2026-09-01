class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>v;
        stack<int>st;
        int j=0;
        for(int i=1;i<=n && j<target.size();i++)
        {
          st.push(i);
          v.push_back("Push");
          if(st.top() != target[j])
          {
            st.pop();
            v.push_back("Pop");
          }
          else 
          {
             j++;
          }
        }
        return v;
        
    }
};