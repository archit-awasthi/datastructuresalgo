BRUTE FORCE APPROACH(Running two loops, checking sum of each element with each element until the target sum is found)
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i] + arr[j] == target)
                {
                    return true;
                    
                }
            }
        }
        return false;
        
    }
};
--------------------------------------------------------------------------------------------------------------------------------------------------------------
BETTER APPROACH (using the hashing or the map data structure)
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        map <int,int> mpp;
        for(int i =0; i<n; i++)
        {
            int num = arr[i];
            int more = target - num;
            if(mpp.find(more) != mpp.end())
            {
                return true;
            }
            mpp[num] = i;
        }
        return false;
    }
};

---------------------------------------------------------------------------------------------------------------------------------------------------------------
BEST APPROACH! (if the array is already sorted OR you dont have to return the index of the resulting pair)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();
       
        int left = 0; int right = n-1;
        while(left<right)
        {
            if(numbers[left] + numbers[right] == target)
            {
                return {left+1,right+1};
            }
            else if(numbers[left] + numbers[right] > target)
            {
                right--;
            }
            else if(numbers[left] + numbers[right] < target)
            {
                left ++;
            }
        }
        return {-1,-1};
    }
    
};
