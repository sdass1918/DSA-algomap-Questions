/* Implemented using queue */

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        queue<char> que1;
        queue<char> que2;
        string res;
        int l1 = word1.length();
        int l2 = word2.length();
        int l = max(l1,l2);
        for(char ch:word1)
        {
            que1.push(ch);
        }
        for(char ch:word2)
        {
            que2.push(ch);
        }
        for(int i=0; i<l; i++)
        {
            if(!que1.empty())
            {
                res.push_back(que1.front());
                que1.pop();
            }
            if(!que2.empty())
            {
                res.push_back(que2.front());
                que2.pop();
            }
        }
        return res;
    }
};