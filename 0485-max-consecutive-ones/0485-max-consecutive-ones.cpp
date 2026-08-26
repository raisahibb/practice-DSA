class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, ans = 0;

        for (int x : nums) {
            if (x == 1)
                count++;
            else
                count = 0;

            ans = max(ans, count);
        }

        return ans;
        //     int ones = 0;
        //     int maxOnes = 0;

        //     for(int right = 0; right < nums.size(); right++)
        //     {
        //         if(nums[right] == 1)
        //         {
        //             ones++;
        //             maxOnes = max(ones, maxOnes);
        //         }
        //         else
        //         {
        //             ones = 0;
        //         }
        //     }

        //     return maxOnes;
        // }
    }
};