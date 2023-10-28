#include <iostream>
#include <vector>
#include <numeric>
#include "Array/index.h"
using namespace std;



int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    vector<int> nums1 = {1, 3, 5, 6};
    cout << "search index: " << searchInsert(nums1, 5) << endl;
    cout << "mid index: " << pivotIndex(nums) << endl;
}
