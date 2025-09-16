# this is not the most ideal solution of this problem, for best optimal solution refer to binary searc hsolution of this problem 
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first= -1;
        int last = -1;
        for(int i =0;i<n;i++)
        {
            if(nums[i] == target)
            {
                if(first == -1)
                {
                    first =i;
                    
                }
                last =i;
            }

        }
        return {first,last};
    }
};
