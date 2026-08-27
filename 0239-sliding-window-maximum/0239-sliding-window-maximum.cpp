/*
ye neeche wala theek tha prr TLE aa rha tha bhut bde test cse ke liye
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        
        for(int right = 0; right <= nums.size() - k; right++)
        {
            int maximum = INT_MIN;
            
            int wSize = right;
            while(wSize < right + k)
            {
                if(nums[wSize] > maximum)
                {
                    maximum = nums[wSize];
                }
                wSize++;
            } 
            
            
            
            result.push_back(maximum);
        }
        return result;
    }
}; */

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int> s;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);

            if(i >= k)
                s.erase(s.find(nums[i-k]));

            if(i >= k-1)
                ans.push_back(*s.rbegin());
        }

        return ans;
    }
};