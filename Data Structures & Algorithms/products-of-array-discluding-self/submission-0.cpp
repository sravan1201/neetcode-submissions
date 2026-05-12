class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v;
        
        for(int i=0;i<nums.size();i++)
        {
            int val=1;
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j)
                {
                    val=val*nums[j];
                }
            }
            v.push_back(val);
        }
        return v;
    }
};
