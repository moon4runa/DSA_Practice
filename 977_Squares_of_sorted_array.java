class Solution {
    public int[] sortedSquares(int[] nums) {
        int s = nums.length;
        int left = 0, right = s - 1;
     
    int result[] = new int[s];
     
    for(int i = s - 1; i >= 0; i--)
    {
        if(Math.abs(nums[left]) > nums[right]){
            result[i] = nums[left]*nums[left];
            left += 1;
        }
        else{
            result[i] = nums[right]*nums[right];
            right -= 1;
        }
    }
        return result;
    }
}
