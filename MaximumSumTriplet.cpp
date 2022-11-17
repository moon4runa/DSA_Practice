// https://www.interviewbit.com/problems/maximum-sum-triplet/

// Given an array A containing N integers.

// You need to find the maximum sum of triplet ( Ai + Aj + Ak ) such that 0 <= i < j < k < N and Ai < Aj < Ak.

// If no such triplet exist return 0.

int Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int> rightMax(n);
    rightMax[n-1] = A[n-1];
    set<int> leftMax;
    for(int i=n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1], A[i]);
    }
    int ans = 0;
    for(int i=1; i<n-1; i++){
        leftMax.insert(A[i-1]);
        auto it = leftMax.lower_bound(A[i]);
        if(it == leftMax.begin()) continue;
        it--;
        if(rightMax[i+1] > A[i]){
            ans = max(ans, *it + A[i] + rightMax[i+1]);
        }
    }
    return ans;
}
