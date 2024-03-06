class Solution {
    public int numOfSubarrays(int[] arr, int k, int threshold) {
        int wSum = 0;
        for(int i=0; i<k; i++) wSum += arr[i];
        int ans = 0;
        int avg = (int) wSum / k;
        if(avg >= threshold) ans += 1;
        int j = k;
        int i = 1;

        while(j < arr.length){
            wSum = wSum - arr[i - 1] + arr[j];
            avg = (int) wSum / k;
            if(avg >= threshold) {
                ans += 1;
            }
            i += 1;
            j += 1;
        }

        return ans;
    }
}
