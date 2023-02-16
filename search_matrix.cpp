class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix[0].size(), n = matrix.size();
        int i = 0, j = (m*n)-1;
        while(i <= j)
        {
            int mid = (i + j) / 2, x;
            if(mid != 0)
                x = matrix[mid/m][mid%m];
            else
                x = matrix[0][0];    //Avoiding division by zero
            if(x == target)
                return true;
            else if(x < target)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return false;
    }
};