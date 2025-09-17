//runs on 0(log n) time complexity, this questons can also be solved by linear search, uploaded on arrays folder in the same repo.

int findfirst(vector<int> nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n-1;
    int first = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(nums[mid] == target)
        {
            first = mid;
            high = mid-1;
        }
        else if(nums[mid] > target)
        {
            high = mid-1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return first;
}

int findlast(vector<int> nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n-1;
    int last = -1;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(nums[mid] == target)
        {
            last = mid;
            low = mid+1;
        }
        else if(nums[mid]<target)
        {
            low = mid+1;
        }
        else
        {
            high = mid -1;
        }
    }
    return last;
}


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findfirst(nums, target);
        int last =  findlast(nums, target);

        if(first == -1) return {-1,-1};
        return {first,last};
    }
};
