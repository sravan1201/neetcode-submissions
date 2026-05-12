class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int k=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
                k=1;
                break;
            }
        }
        if(k==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
