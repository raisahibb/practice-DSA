class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int left = 0;
        int answer = 0;
        unordered_map<int,int> fruits;
        for(int right = 0; right < nums.size(); right++)
        {
            fruits[nums[right]]++;
            
            while(fruits.size() > 2)
            {
                fruits[nums[left]]--;
                if(fruits[nums[left]] == 0)
                {
                    fruits.erase(nums[left]);
                }
                left++;
            }
            
            answer = max(answer,right - left + 1);
        }
        return answer;
    }
};    