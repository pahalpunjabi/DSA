class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum_even=0;
        int sum_odd=0;
        for(int i=1;i<=n*2;i++){
            if(i%2==0) sum_even+=i;
            else sum_odd+=i;
        }
       
        return gcd(sum_even,sum_odd);
    }
};