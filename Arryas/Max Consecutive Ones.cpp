class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int n = nums.size();
      int freq=0;
      int maxfreq=0;
      for(int i = 0;i<n;i++)
      {
        if(nums[i] == 1)
        {
            freq++;
            if(freq>maxfreq)
            {
                maxfreq = freq;
            }
        }
        else
        {
            freq = 0;
        }
      }  
      return maxfreq;
    }
};
