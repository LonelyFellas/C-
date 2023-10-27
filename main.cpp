#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int pivotIndex(vector<int>& nums) {
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

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << "mid index: " << pivotIndex(nums) << endl;
}
