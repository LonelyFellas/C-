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
        leftSum += nums[i];
    }
    return -1;
}

int searchInsert(std::vector<int>& nums, int target) {
    int len = nums.size();
    int left = 0, right = len - 1, ans = len;

    while(left <= right) {
        int mid = ((right - left) >> 1) + left;
        if (target <= nums[mid]) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}
