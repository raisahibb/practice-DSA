class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left = 0;
        int ones = 0;
        int maxOnes = 0;
        
        for(int right = 0; right < nums.size(); right++)
        {
            if(nums[right] == 1)
            {
                ones++;
                maxOnes = max(ones, maxOnes);
            }
            else
            {
                ones = 0;
            }
        }

        return maxOnes;
    }
};