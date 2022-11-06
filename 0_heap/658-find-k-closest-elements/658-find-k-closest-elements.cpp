typedef pair<int, int> pi;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue <pi, vector<pi>, greater<pi> > pq;
        int n = arr.size();
        int a;
        for(int i=0; i<n; i++){
            a = abs(arr[i] - x);
            pq.push({a, i});
        }
        vector<int> res;
        int temp;
        while(k--){
            temp = arr[pq.top().second];
            pq.pop();
            res.push_back(temp);
        }
        sort(res.begin(), res.end());
        return res;
    }
};