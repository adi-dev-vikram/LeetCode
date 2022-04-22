class Solution {
public:
    int firstUniqChar(string s) {
        int countArr[256] ={0};
        for ( int i =0; i < s.size(); i++)
        {
            countArr[s[i]]++;
        }
        for ( int i =0; i < s.size() ; i++)
        {
            if(countArr[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
        
        
    }
};