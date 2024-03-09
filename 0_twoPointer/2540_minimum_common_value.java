class Solution {
    public int getCommon(int[] nums1, int[] nums2) {
        int s1 = nums1.length;
        int s2 = nums2.length;
        int i=0, j = 0;
        while(i<s1 && j<s2){
            if(nums1[i] == nums2[j]) return nums1[i];
            if(nums1[i] > nums2[j]) j+=1;
            else i+=1;
        }

        return -1;
    }
}
