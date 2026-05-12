class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        int n=numbers.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(numbers[i]+numbers[j]==target)
                {
                    v.push_back(i+1);
                    v.push_back(j+1);
                    break;
                }
            }
        }
        return v;
    }
};
