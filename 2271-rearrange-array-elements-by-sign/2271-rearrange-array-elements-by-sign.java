class Solution {
    public int[] rearrangeArray(int[] nums) {
        int size = nums.length;
        int[] result = new int[size];
        int posIdx = 0;
        int negIdx = 1;

        for(int i = 0; i < size; i++)
        {
            if(nums[i]>=0)
            {
                result[posIdx] = nums[i];
                posIdx += 2;
            }
            else
            {
                result[negIdx] = nums[i];
                negIdx += 2;
            }
        }

        return result;
    }   
}