class Solution {
public:
    bool isAnagram(string s, string t) {
        int sLength = s.length();
        int tLength = t.length();
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if(sLength != tLength)
        {
            return false;
        }
        
        for ( int i =0 ; i < s.length() ; i++)
        {
            if(s[i]!=t[i])
            {
                return false;
            }
        }
        return true;
        
        
        
    }
};