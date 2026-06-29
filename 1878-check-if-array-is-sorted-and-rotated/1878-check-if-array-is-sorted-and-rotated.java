class Solution {
    public boolean check(int[] nums) {
        boolean ok = true;
        int[] result = new int[nums.length];
        int ok1 = 0;
        for(int i = 1; i<nums.length; i++)
        {
            if(nums[i]<nums[i-1])
            {
                ok1 = i;
            }
        }
        int j = 0;
        for(int i = ok1; i<nums.length; i++)
        {
            result[j] = nums[i];
            j++;
        }

        for(int i = 0; i< ok1; i++)
        {
            result[j] = nums[i];
            j++;
        }

        for(int i = 0; i < result.length - 1; i++)
        {
            if(!(result[i] <= result[i+1]))
            {
                ok = false;
            }
        }
        return ok;
    }
}