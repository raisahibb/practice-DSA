class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int min_len = nums.size() + 1;
        
        for(int right = 0; right < nums.size(); right++)
        {
            sum = sum + nums[right];
            
            while(sum >= target)
            {
                min_len = min(min_len, right - left + 1);
                sum = sum - nums[left];
                left++;
            }
            
        }
        if(min_len == nums.size() + 1)
            return 0;
        
        else
            return min_len;
    }
};