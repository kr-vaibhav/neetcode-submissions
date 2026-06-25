class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>arr;
        int row = matrix.size();
        int col = matrix[0].size();

        for( int i = 0; i < row; ++i ){
            for( int j = 0; j < col; ++j ){
                arr.push_back(matrix[i][j]);
            }
        }

        int i = 0, j = arr.size()-1;

        while( i <= j ){
            int mid = i + ( j - i )/2;

            if( arr[mid] == target )return true;
            else if( arr[mid] > target )j = mid - 1;
            else i = mid + 1;
        }

        return false;
    }
};
