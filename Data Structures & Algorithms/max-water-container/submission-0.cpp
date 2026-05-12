class Solution {
public:
    int maxArea(vector<int>& heights) {
        vector<int> v;
        for(int i=0;i<heights.size()-1;i++)
        {
            for(int j=i+1;j<heights.size();j++)
            {
                int a=-1;
                 if(heights[i]>heights[j])
                 {
                    a=(j-i)*heights[j];
                 }
                 else
                 {
                    a=(j-i)*heights[i];
                 }
                  v.push_back(a);
            }
        }
        int b=*max_element(v.begin(),v.end());
        return b;
    }
};
