class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        bool ans = true;
        for(int i=0; i<strs[0].length(); i++)
        {
            for(int j=1; j<strs.size(); j++)
            {
                if(strs[j][i]!=strs[0][i])
                {
                    ans = false;
                    break;
                }
            }
            if(!ans)
            {
                break;
            }else
            {
                res.push_back(strs[0][i]);
            }
        }
        return res;
    }
};