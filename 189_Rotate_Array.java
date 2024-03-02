class Solution {

    public void reverse(int[] nums, int start, int end){
        int temp = nums[start];
        while(start < end){
            temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start += 1;
            end -= 1;
        }

    }


    public void rotate(int[] nums, int k) {
        int temp = nums[0];
        int len = nums.length;
        k = k%len;
        if(k == len || k == 0) return;
        reverse(nums, 0, len-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, len-1);
    }
}
