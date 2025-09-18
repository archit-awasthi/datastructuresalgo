// THIS IS BRUTE FORCE SOLUTION WHICH USES SIMPLE LINEAR SEARCH TO FIND THE TARGET AND RETURN THE INDEX VALUE;

class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n= nums.size();
       for(int i=0;i<n;i++)
       {
        if(nums[i] == target)
        {
            return i;
        }
       }
       return -1;
    }
};


// BELOW IS THE OPTIMAL SOLUTION OF THE FOLLOWING PROBLEM WHICH USES BINARY SEARCH TO FIND THE TARGET VALUE'S INDEX, EVEN AFTER ROTATING THE ARRAY, ONE HALF ALWAYS
// SORTED SO WE NEED TO FIND WHICH HALF IS SORTED AND CONTINUE OUR SEARRCH IN IT OTHERWISE ELIMINATE THAT SEARCH SPACE, SO IN THE END WE CAN FIND THE ANSWER WE 
//TIME COMPLEXITY OF O(log n)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0; int high = n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid] == target) return mid;
            if(nums[low] <= nums[mid])
            {
                if(nums[low] <= target && target <= nums[mid])
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
            }
            else
            {
                if(nums[mid] <= target && target <= nums[high])
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};
