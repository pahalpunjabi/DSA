class Solution {
public:
    int getCommon(vector<int>& v1, vector<int>& v2) {
        int i=0;
        int j=0;
        while(i<v1.size() && j<v2.size()){
            if(v1[i]==v2[j]) return v1[i];
            else if(v1[i]<v2[j]) i++;
            else if(v2[j]<v1[i]) j++;
        }
        return -1;  
    }
};