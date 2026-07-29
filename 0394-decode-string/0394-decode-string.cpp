class Solution {
public:
string decodeString(string s) {
stack<string> st;

    for (int i = 0; i < s.size(); i++) {

        if (s[i] == ']') {

            string res;
            string temp;

            // Get the string inside [...]
            while (st.top() != "[") {
                temp = st.top() + temp;
                st.pop();
            }

            // Remove '['
            st.pop();

            // Collect all digits of the count
            string number = "";

            while (!st.empty() &&
                   st.top()[0] >= '0' &&
                   st.top()[0] <= '9') {

                number = st.top() + number;
                st.pop();
            }

            // Convert "100" into integer 100
            int count = stoi(number);

            // Repeat temp count times
            while (count--) {
                res += temp;
            }

            // Push the decoded result back
            st.push(res);
        }
        else {
            st.push(string(1, s[i]));
        }
    }

    string ans;

    while (!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }

    return ans;
}

};
