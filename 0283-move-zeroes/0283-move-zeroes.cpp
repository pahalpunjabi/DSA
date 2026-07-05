class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=1;
        while(i<n&& j<n){
            if(j<i){
                j++;
                continue;
            }
            if(nums[i]==0 && nums[j]!=0) swap(nums[i],nums[j]);
            if(nums[i]!=0) i++;
            if(nums[j]==0) j++;
        }
    }
};