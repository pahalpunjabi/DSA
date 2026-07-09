class Solution {
public:
    string reversePrefix(string s, char ch) {
      string ans;
      int n=s.size();
      stack <char> st;
      int r=0;
      for(int i=0;i<n;i++){
        if(s[i]==ch){
            r=i;
            ans.push_back(s[i]);
            while(!st.empty()){
              ans.push_back(st.top());
              st.pop();
            }
            break;
        }
        else st.push(s[i]);
    }  
    if(!st.empty()) return s;
    for(int i=r+1;i<n;i++){
        ans.push_back(s[i]);
    }
    return ans;
    }
};