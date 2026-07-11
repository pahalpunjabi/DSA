class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int r=0;
        int n=nums.size();
     for(int i=0;i<n;i++){
        if(nums[i]==target){
            r=i;
            break;
        }
        if(nums[i]<target){
            if(i==n-1) return n;
            else if(nums[i+1]>target) return i+1;
        }
     }
     return r;   
    }
};