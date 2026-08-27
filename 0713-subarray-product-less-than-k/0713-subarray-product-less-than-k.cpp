class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if(k <= 1)
            return 0;
            
        int left = 0;
        int product = 1;
        int answer = 0;

        
            for (int right = 0; right < nums.size(); right++) {
                product = nums[right] * product;

                while (product >= k) {
                    product = product / nums[left];
                    left++;
                }
                
                answer += right - left + 1;
            }
        
        
        return answer;
    }
};