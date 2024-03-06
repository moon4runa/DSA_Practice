class Solution {
    public List<String> findRepeatedDnaSequences(String s) {
        List<String> ans = new ArrayList<>();
        if(s.length() <= 10) return ans;
        HashMap<String, Integer> countMp = new HashMap<>();
        int i = 0;
        int j = 10;
        String temp;
        while(j <= s.length()){
            temp = s.substring(i, j);
            if(countMp.get(temp) == null) countMp.put(temp, 0);
            countMp.put(temp, countMp.get(temp) + 1);
            if(countMp.get(temp) == 2) ans.add(temp);
            i +=1;
            j+=1;
        }
        return ans;

    }
}
