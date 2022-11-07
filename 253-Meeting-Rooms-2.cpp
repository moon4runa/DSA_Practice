int meetingRooms(int n, vector<vector<int>>& A){
    vector<int> start;
    vector<int> end;
    for(auto it: A){
        start.push_back(it[0]);
        end.push_back(it[1]);
    }
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
 
    int res = 0;
    int s = 0;
    int e = 0;
    while(s < n){
        if(start[s] < end[e]) {
            res+=1;
            s++;
        }
        else{
            e++;
            s++;
        }
    }
    
    return res;
}
