class Solution {
public:
    int largestInteger(int n, int s) {
      if(s==0) return 0;
        int num=0;
        for(int i=0;i<n;i++){
            for(int j=9;j>=0;){
                if(j<=s){
                    num=num*10+j;
                    s-=j;
                    break;
                }
                else j--;
            }
        }
        if(s==0) return num;
        else return -1;
      
    }
};