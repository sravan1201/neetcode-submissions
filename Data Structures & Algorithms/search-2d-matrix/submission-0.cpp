class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int found=0;
        for(int i=0;i<matrix.size();i++)
        {
            int left=0;
            int right=matrix[0].size()-1;
            while(left<=right)
            {
                int mid=left+(right-left)/2;
                if(matrix[i][mid]==target)
                {
                    found=1;
                    break;
                }
                else if(matrix[i][mid]>target)
                {
                    right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
            }

        }
        if(found==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
