#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> array(size, 0); // Initialize with 0

        vector<int> ans;

        // Mark numbers as present
        for (int i = 0; i < size; i++) {
            array[nums[i] - 1] = nums[i]; // Use nums[i] - 1 to mark correct index
        }

        // Collect missing numbers
        for (int i = 0; i < size; i++) {
            if (array[i] == 0) {
                ans.push_back(i + 1); // Missing numbers are 1-indexed
            }
        }

        return ans;
    }
};