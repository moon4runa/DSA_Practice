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