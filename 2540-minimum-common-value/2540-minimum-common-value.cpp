class Solution {
public:
    int getCommon(vector<int>& v1, vector<int>& v2) {
        set <int> st;
        st.insert(v1.begin(),v1.end());
        for(int i=0;i<v2.size();i++){
            if(st.find(v2[i])!=st.end()) return v2[i];
        }
        return -1;
    }
};