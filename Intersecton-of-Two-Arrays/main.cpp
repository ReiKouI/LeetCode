#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1;
        set<int> set2;
        for (int i = 0; i < nums1.size(); i++)
            set1.insert(nums1[i]);

        for (int i = 0; i < nums2.size(); i++)
            if (set1.find(nums2[i]) != set1.end())
                set2.insert(nums2[i]);

        vector<int> result;
        for (set<int>::iterator iter = set2.begin(); iter != set2.end(); iter++)
            result.push_back( *iter);

        return result;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}