class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        stack <char> st;
        int count=0;
        int mx=0;
      for(int i=0;i<n;i++){
        if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')'){
            count=st.size();
            mx=max(count,mx);
            st.pop();
        }
      }
      return mx;  
    }
};