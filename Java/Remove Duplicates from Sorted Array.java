class Solution {
    public int removeDuplicates(int[] nums) {
        int last_filled_num=nums[0];
        int last_filled_index=0;
        int i=1;
        int cnt=1;
        while(i<nums.length)
        {
            if(nums[i]==last_filled_num)
            {
                i++;
            }
            else
            {
                cnt++;
                last_filled_num=nums[i];
                nums[++last_filled_index]=last_filled_num;
                i++;
            }
        }
        return cnt;
        
    }
}
