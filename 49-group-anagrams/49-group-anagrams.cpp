class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     vector<vector<string>> res;
	map<string, vector<string>> mp;
	for(auto it: strs){
	string nw = it;
    sort(nw.begin(), nw.end());
	// if(mp.find(nw) == mp.end()){
// 	vector<string> temp;
// 	temp.push_back(it);
// 	mp[nw] = temp;
// }
// else{
	mp[nw].push_back(it);
// }
}
for(auto it: mp){
res.push_back(it.second);
}

return res;
   
    }
};