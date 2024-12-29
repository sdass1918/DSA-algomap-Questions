#include<bits/stdc++.h>




class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];
        for(int i:nums)
        {
            if(abs(i)<abs(closest))
            {
                closest = i;
            }
        }

        if(closest<0 && find(nums.begin(), nums.end(), abs(closest))!=nums.end())
        {
            return abs(closest);
        }else
        {
            return closest;
        }
    }
};