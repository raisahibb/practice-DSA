class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            int ok=target-nums[i];
            if(mp.find(ok)!=mp.end())
            {
                return{mp[ok],i};
            }
            mp[nums[i]]=i;
            
        }
        return {};
    }
};