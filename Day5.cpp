class Solution {
public:
    int firstUniqChar(string s) {
        int Arr[26]={0};
        
        for(int i=0;i<s.length();i++)
        {
            Arr[s[i]-'a']++;
        }
        
        for(int i=0;i<s.length();i++)
        {
            if( Arr[s[i]-'a'] == 1)
            {
                return i;
            }
        }
        return -1;
        
    }
};