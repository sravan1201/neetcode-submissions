class Solution {
public:
    int search(vector<int>& nums, int target) {
        int found=0;
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                 found=1;
                return mid;
                break;
            }
            else if(nums[mid]>target)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        if(found==0)
        {
            return -1;
        }
      }
};
