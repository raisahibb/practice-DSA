class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int left = 0;

        map<int,int> mp;

        long long sum = 0;
        long long answer = 0;

        for(int right = 0; right < nums.size(); right++)
        {
            sum = sum + nums[right];
            mp[nums[right]]++;

            if(right - left + 1 > k)
            {
                mp[nums[left]]--;
                sum = sum - nums[left];

                if(mp[nums[left]] == 0)
                {
                    mp.erase(nums[left]);
                }
                left++;
            }

            if(right - left + 1 == k && mp.size() == k)
            {
                answer = max(sum,answer);
            }
        }
        return answer;
    }
};