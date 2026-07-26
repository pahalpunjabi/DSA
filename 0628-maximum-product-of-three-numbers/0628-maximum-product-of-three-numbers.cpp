class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int r=nums[n-1]*nums[n-2]*nums[n-3];
        int re=nums[1]*nums[0]*nums[n-1];
        return max(r,re);
    }
};