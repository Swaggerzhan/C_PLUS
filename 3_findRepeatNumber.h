//
// Created by swagger on 2021/6/7.
//

#ifndef C_PLUS_3_FINDREPEATNUMBER_H
#define C_PLUS_3_FINDREPEATNUMBER_H

#include <vector>
#include <algorithm>

using std::swap;
using std::vector;

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++){

            while ( nums[i] != i ){
                if ( nums[nums[i]] == nums[i] )
                    return nums[i];
                swap(nums[nums[i]], nums[i]);
            }

        }
        return -1;
    }
};



#endif //C_PLUS_3_FINDREPEATNUMBER_H
