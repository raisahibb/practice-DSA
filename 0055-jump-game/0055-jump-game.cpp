class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReached = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(i > maxReached)
            {
                return false;
            }

            maxReached = max(maxReached, i + nums[i]);
        }
        return true;
    }
};