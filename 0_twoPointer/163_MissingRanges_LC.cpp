#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> missingRanges(vector<int> &arr, int lower, int upper){
	vector<int> plus, minus;
	plus.push_back(lower+1);
	minus.push_back(lower-1);
	for(auto it: arr){
		plus.push_back(it+1);
		minus.push_back(it-1);
}
vector<string> res;
int i=0;
int j = 1;
int n = arr.size();
while(j<=n){
	if(plus[i] == minus[j]) res.push_back(to_string(plus[i]));
	else if(plus[i] < minus[j]){
		string temp = to_string(plus[i]) + "->" + to_string(minus[j]);
		res.push_back(temp);
}
i++;
j++;
}
//cout<< "arr: "<< arr[n-1]<< "\n";
if(arr[n-1] + 1 == upper){
	res.push_back(to_string(upper));
}
else if(arr[n-1] + 1< upper){
	res.push_back(to_string(arr[n-1]+1) + "->" + to_string(upper));
}
return res;
}



int main() {
	// your code goes here
	vector<int> arr {0,1,3,50,75};
	int lower = 0;
	int upper = 99;
	vector<string> res = missingRanges(arr, lower, upper);
	for(auto it: res) cout << it << "\n";
	
	return 0;
}
