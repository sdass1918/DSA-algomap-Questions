class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for(int a:nums)
        {
            mp[a]++;
            if(mp[a]>1)
            {
                return true;
            }
        }
        return false;
    }
};