class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int poscount,negcount;
        for(int i = 0; i<n; i++)
        {
            if(nums[i]<0)
            {
                negcount++ ;
            }

            else if (nums[i] > 0)
            {
                poscount++ ;
            }
        }
        return max(poscount,negcount);
    }
};
