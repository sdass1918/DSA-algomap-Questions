class Solution {
//Solution implemented in O(1) space complexity
public:
    int majorityElement(vector<int>& nums) {
        int res = nums[0];
        for(int i=0; i<nums.size(); i++)
        {
            int cnt = 1;
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[j]==nums[i])
                {
                    cnt++;
                }
            }
            if(cnt>nums.size()/2)
            {
                res = nums[i];
                break;
            }
        }
        return res;
    }
};


class Solution {
//Implemented using the hashmaps data structure
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> freqMap;
        for(int i=0; i<nums.size(); i++)
        {
            freqMap[nums[i]]++;
        }
        int maxFrequency = 0;
        int mostFrequentElement = -1;
        for (const auto& pair : freqMap) {
            if (pair.second > maxFrequency) {
                maxFrequency = pair.second;
                mostFrequentElement = pair.first;
            }
        }
        return mostFrequentElement;
    }
};