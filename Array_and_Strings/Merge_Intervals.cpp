class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> res;

        //sorting the intervals vector according to the starting point of all the intervals in the vactor
        sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b){ return a[0]<b[0]; });

        for(auto &interval:intervals)
        {

            //inserting in the resultant vector iff either it is empty or the end point is smaller than the starting point of the current interval
            if(res.empty() || res.back()[1] < interval[0])
            {
                res.push_back(interval);
            }else
            {
                res.back()[1] = max(res.back()[1], interval[1]);
            }
        }
        return res;
    }
};