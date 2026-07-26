class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string f;
        int n=s.size();
        
        for(int i=n-1;i>=0;i--){
            f+=s[i];

        }
        if(f==s) return true;
        else return false;
    }
};