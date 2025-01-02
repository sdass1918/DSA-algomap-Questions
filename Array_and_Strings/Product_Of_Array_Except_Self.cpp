class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> products(nums.size());
        vector<int> res(nums.size());

        //This is calculating the product from that index to last index
        for(int i=nums.size()-1; i>=0; --i)
        {
            if(i<nums.size()-1)
            products[i]=nums[i]*products[i+1];
            else
            products[i]=nums[i];
        }

        int i=0;
        int product = 1;
        while(i<nums.size())
        {
            if(i==nums.size()-1)
            {
                res[i] = product;
            }else
            {
                res[i] = products[i+1] * product;
                product = product * nums[i];
            }
            
            i++;
        }
        return res;

    }
};