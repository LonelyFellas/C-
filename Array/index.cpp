#include <vector>
#include <numeric>
//
// Created by Darwish on 10/27/23.
//
#include "index.h"
int pivotIndex(std::vector<int>& nums) {
    int leftSum = 0;
    int total = accumulate(nums.begin(), nums.end(), 0);
    for (int i = 0; i < nums.size(); i++) {
        total -= nums[i];

        if (leftSum == total) {
            return i;
        }
        leftSum+= nums[i];
    }
    return -1;
}
