class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int> mp;
        for(char ch:text)
        {
            mp[ch]++;
        }
        int s = INT_MAX;
        string str = "balon";
        mp['l']/=2;
        mp['o']/=2;
        for(auto el:str)
        {
            s = min(s, mp[el]);
        }
        return s;
    }
};