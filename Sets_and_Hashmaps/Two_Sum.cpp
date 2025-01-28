class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        set<int> st;
        vector<int> res;
        for(int i=0; i<nums.size(); i++)
        {
            st.insert(nums[i]);
            mp[nums[i]]=i;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(st.find(target-nums[i]) != st.end() && mp[target-nums[i]]!=i)
            {
                res.push_back(i);
                res.push_back(mp[target-nums[i]]);
                break;
            }
        }
        return res;
    }
};