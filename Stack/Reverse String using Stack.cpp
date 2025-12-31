class Solution {
  public:
    string reverse(const string& S) {
        stack<char> st;
        
        for(char c : S) st.push(c);
        
        string ans;
        
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
        
    }
};
