class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gas_sum = accumulate(gas.begin(), gas.end(), 0);
        int cost_sum = accumulate(cost.begin(), cost.end(), 0);
        if(gas_sum < cost_sum) return -1;
        int n = gas.size();
        int tank =0;
        int start = 0;
        for(int i=0; i<n; i++){
            tank += (gas[i] - cost[i]);
            if(tank < 0){
                start = i + 1;
                tank = 0;
            }
        }
        return start;
    }
};


// BRUTE FORCE 
// TC: O(n^2), SC: O(1)
// bool check(index, vector<int>&gas, vector<int>&cost){ // index = 3
// 	int n = gas.size(); // 5
// 	int i = index + 1; // 4
// 	int tank = gas[index] - cost[index]; // 3

// 	while(i%n != index){ // 5%5 = 0
// 	int ri = i%n;
// 	tank += gas[ri]; // tank = 8
// 	if(tank < 0 || tank <cost[ri]) return 0;
// 	tank -= cost[ri]; // tank = 6
// 	i += 1; // i = 5
// }
// return 1;
// }
// vector<int> gas;
// vector<int> cost;
// int stations;
// int gas_sum = accumulate(gas.begin(), gas.end(), 0);
// int cost_sum = accumulate(cost.begin(), cost.end(), 0);
// if(gas_sum < cost_sum) return -1;

// for(int i=0; i<stations; i++){
// 	if( gas[i] < cost[i] ){
// 		continue;
// }
// 	if(check(i, gas, cost)){
// 	return i;
// }
// }

// return -1;
