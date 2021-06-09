//
// Created by swagger on 2021/6/7.
//

#ifndef C_PLUS_4_FINDNUMBERIN2DARRAY_H
#define C_PLUS_4_FINDNUMBERIN2DARRAY_H

#include <vector>

using std::vector;

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int row_size = matrix[0].size();
        int col_size = matrix.size();
        int row = 0;
        int col = 0;
        while (row < row_size && col < col_size){
            if (matrix[row][col] == target )
                return true;
            if (matrix[row + 1][col] <= target)
                row ++;
            if (matrix[row][col + 1] <= target)
                col ++;
        }
        return -1;
    }
};

#endif //C_PLUS_4_FINDNUMBERIN2DARRAY_H
