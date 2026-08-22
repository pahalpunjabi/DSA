class Solution {
public:
    bool checkDivisibility(int n) {
        int m=n;
      vector <int> v;
      while(m>0){
        int r=m%10;
        v.push_back(r);
        m/=10;
      }
      int sum=0;
      int p=1;
      for(int i=0;i<v.size();i++){
        sum+=v[i];
        p*=v[i];

      }
      int r=sum+p;
      if(n%r==0)  return true;
      else return false;
    }
};