#include <iostream>
#include <vector>
#include <numeric>
#include "Array/index.h"
using namespace std;



int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << "mid index: " << pivotIndex(nums) << endl;
}
