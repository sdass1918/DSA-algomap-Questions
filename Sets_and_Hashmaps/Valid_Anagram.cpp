class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.length();
        int l2 = t.length();
        if(l1!=l2)
        {
            return false;
        }
        map<char,int> mp1;
        map<char,int> mp2;
        for(char ch:s)
        {
            mp1[ch]++;
        }
        for(char ch:t)
        {
            mp2[ch]++;
        }
        return mp1==mp2;
    }
};