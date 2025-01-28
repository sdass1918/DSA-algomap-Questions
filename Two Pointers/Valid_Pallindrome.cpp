class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        bool ans = true;
        for(char ch:s)
        {
            if(isalpha(ch))
            {
                str.push_back(ch | (1<<5));
            }else if(isdigit(ch))
            {
                str.push_back(ch);
            }
        }
        int left = 0;
        int right = str.length()-1;
        while(left <= right)
        {
            if(str[left]!=str[right])
            {
                ans = false;
                break;
            }else
            {
                left++;
                right--;
            }
        }
        return ans;
    }
};