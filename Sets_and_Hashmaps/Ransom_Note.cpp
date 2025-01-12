class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp1;
        map<char,int> mp2;
        for(char ch:ransomNote)
        {
            mp1[ch]++;
        }
        for(char ch:magazine)
        {
            mp2[ch]++;
        }
        for(char ch:ransomNote)
        {
            if(mp1[ch]>mp2[ch])
            {
                return false;
            }
        }
        return true;
    }
};