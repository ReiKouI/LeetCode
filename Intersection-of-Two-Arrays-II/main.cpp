#include <iostream>

#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> map;
        for (int i = 0; i < nums1.size(); i++)
            map[nums1[i]]++;

        vector<int> result;


        for (int i = 0; i < nums2.size(); i++)
            if (map[nums2[i]] != 0) {
                result.push_back(nums2[i]);
                map[nums2[i]]--;
            }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}