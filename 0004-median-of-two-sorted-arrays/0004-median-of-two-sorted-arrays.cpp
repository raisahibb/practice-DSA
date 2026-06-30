class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto num : nums2)
        {
            nums1.push_back(num);
        }
        sort(nums1.begin(),nums1.end());

        double ok;
        int x = nums1.size()/2;
        if(nums1.size() % 2 != 0 )
        {
            ok = nums1[x];
        }
        else
        {
            ok = (double)(nums1[x] + nums1[x-1]) / 2;
        }
        return ok;
    }
};