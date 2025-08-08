class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
         
        for (int i = 0; i < n; i++) {
            int target = nums[i];

            // Search before i
            auto it = find(nums.begin(), nums.begin() + i, target);

            // If not found before, search after i
            if (it == nums.begin() + i) {
                it = find(nums.begin() + i + 1, nums.end(), target);
            }

            // If no duplicate found
            if (it == nums.end()) {
                return target; // return the unique number
            }
        }

        return -1; // in case no unique number is found
    }
};
