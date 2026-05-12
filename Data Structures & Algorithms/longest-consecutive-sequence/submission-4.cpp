class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int n=1;
        int x=1;
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(auto it = s.begin(); it != s.end(); ++it)
        {
            auto next_it = next(it);
            if(next_it != s.end() && *next_it - *it == 1)
            {
                n++;
            }
            else
            {
                if(n > x) x=n;
                n=1;
            }
        }
        return x;
    }
};