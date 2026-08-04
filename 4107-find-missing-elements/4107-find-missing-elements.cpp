class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = 0;
        vector<int> vt;
        for(int i = nums.front(); i <= nums.back(); i++)
        {
            if(nums[n] == i)
            {
                n++;
            }
            else
            {
                vt.push_back(i);
            }
        }
        return vt;
    }
};