class Solution {
public:
    long long gcdSum(vector<int>& nums) {
      int n=nums.size();
      vector <int> mxx;
      int mx=0;
      for(int i=0;i<n;i++){
        if(nums[i]>mx) mx=nums[i];
        mxx.push_back(mx);
      }
      vector <int> p_gcd;
      int gcdd;
      for(int i=0;i<n;i++){
        gcdd=gcd(nums[i],mxx[i]);
        p_gcd.push_back(gcdd);
        
      } 
      long long ans=0;
      sort(p_gcd.begin(),p_gcd.end());
      int i=0;
      int j=n-1; 
      while(j>i){
        int a=gcd(p_gcd[i],p_gcd[j]);
        ans+=a;
        i++;
        j--;
      }
      return ans;
    }
};