class Solution {
public:
    vector <int> convert_to_vector(int n){
        vector <int> v;
        while(n>0){
            int m=n%10;
            v.push_back(m);
            n/=10;
        }
        sort(v.begin(),v.end());
        return v;
    }
    int maxProduct(int n) {
        vector <int> v;
        v=convert_to_vector(n);
        int p=v.size();
        int r=v[p-1]*v[p-2];
        return r;
        
    }
};