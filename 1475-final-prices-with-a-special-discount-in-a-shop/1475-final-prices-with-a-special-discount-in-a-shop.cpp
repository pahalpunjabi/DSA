class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
        int n=nums.size();
        stack <int> st;
        st.push(0);
        vector <int> ans;
        for(int i=n-1;i>=0;i--){
            if(st.top()==0){
                ans.push_back(nums[i]);
                st.push(nums[i]);
            }
            else{
                while(nums[i]<st.top()){
                    st.pop();
                }
                int a=nums[i]-st.top();
                ans.push_back(a);
                st.push(nums[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};