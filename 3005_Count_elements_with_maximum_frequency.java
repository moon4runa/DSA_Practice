class Solution {
    public int maxFrequencyElements(int[] nums) {

        HashMap<Integer, Integer> freqMp = new HashMap<Integer, Integer>();
        int maxFreq = 0;

        for(int i = 0; i<nums.length; i++){
            if (freqMp.containsKey(nums[i]))freqMp.put(nums[i], freqMp.get(nums[i]) + 1);
            else  freqMp.put(nums[i], 1);
            maxFreq = Math.max(maxFreq, freqMp.get(nums[i]));
        }
        int ans = 0;
        for (Map.Entry entry : freqMp.entrySet()) {
            if(entry.getValue().equals(maxFreq)) ans+=maxFreq;
        }
        return ans;


        
    }
}
