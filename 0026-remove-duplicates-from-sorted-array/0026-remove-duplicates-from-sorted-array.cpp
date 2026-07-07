class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int k=1;
      int n=nums.size();
      int val=nums[0];
      for(int i=1;i<n;i++){
        if(nums[i]==val){
            continue;
        }
        else{
            nums[k]=nums[i];
            val=nums[i];
            k++;
        }
      }
        
        return k;
 
    }
};