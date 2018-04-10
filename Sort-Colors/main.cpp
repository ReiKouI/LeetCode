#include <iostream>
#include <vector>

using namespace std;

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = -1;
        int two = nums.size();
        int i = 0;

        while (i < two) {
            if (nums[i] == 0) {
                swap(nums[zero + 1], nums[i]);
                i++;
                zero ++;
            } else if (nums[i] == 1) {
                i++;
            } else {
                swap(nums[two - 1], nums[i]);
                two--;
            }
        }
    }
};

int main() {
    int arr[] = {
            1, 2, 0, 0, 2, 1, 0
    };

    vector<int> nums(arr, arr + sizeof(arr) / sizeof(int));
    Solution().sortColors(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    return 0;
}