class Solution {
public:
    long long int cal_hrs(vector<int> &piles,int k)
    {
        long long int hrs=0;
        for(auto x:piles)
        {
            hrs+=((x+k-1)/k);
        }
        return hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans;
        while(low<=high)
        {
            int mid=(low+high)>>1;
            long long int thrs=cal_hrs(piles,mid);
            if(thrs<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};
