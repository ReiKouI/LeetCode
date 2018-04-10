#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int l = 0, r = -1; // [l, r]

        int sum = 0;

        int res = nums.size() + 1;

        while (l < nums.size()) {
            if (r + 1 < nums.size() && sum < s) {
                r ++;
                sum += nums[r];
            } else {
                sum -= nums[l];
                l ++;
            }

            if (sum >= s) {
                res = min (res, r - l + 1);
            }

        }

        if (res == nums.size() + 1)
            return 0;
        return res;

    }
};

int main() {
    int arr[] = {
            2,3,1,2,4,3
    };

    vector<int> nums(arr, arr + sizeof(arr) / sizeof(int));
    cout << Solution().minSubArrayLen(7, nums) << endl;

    return 0;
}