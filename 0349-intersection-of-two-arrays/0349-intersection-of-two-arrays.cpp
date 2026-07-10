class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        map<int, int> mp;
        for(auto num : nums1)
        {
            mp[num]++;
        }

        for(auto num : nums2)
        {
            if(mp.find(num) != mp.end())
            {
                result.push_back(num);
                mp.erase(num);
            }
        }
        return result;
    }
};