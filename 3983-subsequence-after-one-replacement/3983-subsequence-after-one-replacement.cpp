class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n = s.size(), m = t.size();

        if (n > m)
            return false;

        
        vector<int> left(n);
        int j = 0;
        for (int i = 0; i < n; i++) {
            while (j < m && t[j] != s[i])
                j++;

            if (j == m)
                left[i] = m;
            else
                left[i] = j++;
        }

        
        if (left[n - 1] != m)
            return true;

       
        vector<int> right(n);
        j = m - 1;

        for (int i = n - 1; i >= 0; i--) {
            while (j >= 0 && t[j] != s[i])
                j--;

            if (j < 0)
                right[i] = -1;
            else
                right[i] = j--;
        }

        
        for (int i = 0; i < n; i++) {

            int L = (i == 0) ? -1 : left[i - 1];
            int R = (i == n - 1) ? m : right[i + 1];

            
            if (L + 1 < R)
                return true;
        }

        return false;
    }
};