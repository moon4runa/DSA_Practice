class Solution {
public:
    vector<int> findAnagrams(string st, string p) {
        unordered_map<char, int> mp;
	int m = p.length();
	int n = st.length();
	for(int i=0; i<m; i++){
		mp[p[i]]++;
	}
	int char_mat = 0;
	int s = 0;
	int e = 0;
	vector<int> res;
	while(e < n){
		if(mp.find(st[e]) != mp.end()){
		mp[st[e]]--;
		if(mp[st[e]] == 0) char_mat += 1;
		}
		if(char_mat == mp.size()) res.push_back(s);
		if(e-s == m-1){
			if(mp.find(st[s]) != mp.end()){
				if(mp[st[s]] == 0) char_mat --;
				mp[st[s]]++;
			}
			s++;
		}
		e++;
	}
	return res;
    }
};