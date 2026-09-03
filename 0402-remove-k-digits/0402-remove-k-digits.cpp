class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for(int i = 0; i < num.size(); i++) {
            while(!st.empty() && st.top() > num[i] && k > 0) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

        while(k > 0) {
            st.pop();
            k--;
        }

        string ans;

        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        int i = 0;
        while(i < ans.size() && ans[i] == '0')
            i++;

        ans = ans.substr(i);

        if(ans == "")
            return "0";

        return ans;
    }
};