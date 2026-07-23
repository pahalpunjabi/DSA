class Solution {
public:
    int numOfStrings(vector<string>& v, string word) {
        int n=v.size();
        int count=0;
       for(int i=0;i<n;i++){
        string s=v[i];
        if(word.find(s)!=string::npos) count++;
       }
       return count; 
    }
};