// this is not the best approach, optimally this question can be done with binary search in 0(log n) time complexity, this is a linear approach tho, just practised it for learning.
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
         if (n == 1) return 0;
        if(nums[0] > nums[1])
            {
                return 0;
            }
        else if(nums[n-1] > nums[n-2])
            {
                
                return n-1;
            }
       
        for(int i=1;i<n-1;i++)
        {
            
            
            if(nums[i-1] < nums[i] && nums[i] > nums[i+1])
            {
                int ans = i;
                return ans;
            }
            
        }  
            
        
        return 0;
    }
};
