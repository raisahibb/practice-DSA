class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0; 
        int j = 0; 
        int sum = 0;
        int min_len = INT_MAX;

        while(j < nums.size())
        {
            sum = sum + nums[j];
            while(sum >= target)
            {
                sum = sum - nums[i];
                min_len = min(j-i+1, min_len);
                i++;
            }
            j++;
        }
        
        if(min_len == INT_MAX)
        {
            return 0;
        }

        return min_len;
    }
};