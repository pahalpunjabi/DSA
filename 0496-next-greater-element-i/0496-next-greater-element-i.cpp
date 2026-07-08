class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int,int> mp;
        stack <int> st;
        st.push(-1);
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
            if(st.top()==-1){ 
                mp[nums2[i]]=-1;
                st.push(nums2[i]);
                continue;
            }
        
            else{
                while(st.top()!=-1 && nums2[i]>st.top()){
                    st.pop();
                }
                mp[nums2[i]]=st.top();
                st.push(nums2[i]);
            }

        
        }
        vector <int> v;
        for(int num:nums1){
            if(mp.find(num)!=mp.end()){
                v.push_back(mp[num]);
            }

        }
        return v;
        
        
    }
};