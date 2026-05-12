class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> v;
        if(prices.size()==0)
        {
            return 0;
        }
        else if(prices.size()==1)
        {
            return 0;
        }
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                int a=prices[j]-prices[i];
                v.push_back(a);
            }
        }
        int b=*max_element(v.begin(),v.end());
        if(b>0)
        {
            return b;
        }
        else
        {
            return 0;
        }

    }
};
