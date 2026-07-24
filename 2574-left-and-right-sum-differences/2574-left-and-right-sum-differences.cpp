class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       vector <int> l_s;
       vector <int> r_s;
       int n=nums.size();
       int sum = accumulate(nums.begin(), nums.end(), 0);
       int ls=sum;
       for(int i=n-1;i>=0;i--){
        ls-=nums[i];
        l_s.push_back(ls);
       }
       reverse(l_s.begin(),l_s.end());
       int rs=sum;
       for(int i=0;i<n;i++){
        rs-=nums[i];
        r_s.push_back(rs);
       }
       vector <int> result;
       for(int i=0;i<n;i++){
        int c=abs(l_s[i]-r_s[i]);
        result.push_back(c);
       }
       return result;

    }
};