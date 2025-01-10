//This has been implemented using sets which takes more time of O(n^2)
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> jewel;
        for(auto ch:jewels)
        {
            jewel.insert(ch);
        }
        int cnt = 0;
        for(char ch:stones)
        {
            for(auto el:jewel)
            {
                if(ch==el)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

//Now this has been implemented using hashmaps where the time complexity is O(n)
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, bool> mp;
        for(auto ch:jewels)
        {
            mp[ch]=true;
        }
        int cnt = 0;
        for(char ch:stones)
        {
            if(mp[ch]) cnt++;
        }
        return cnt;
    }
};
