class Solution {
public:
    int findPivot(vector<int> &nums){
        int n = nums.size();
        int low = 0;
        int high = n -1;
        int mid;
        
        while(low<=high){
            mid = (low + high)/2;
            if(mid<high && nums[mid] > nums[mid+1]) return mid;
            else if(mid>low && nums[mid-1] > nums[mid]) return (mid-1);
            else if(nums[low] < nums[mid]){ //left sorted
                    low = mid + 1;
                }
            else {
                high = mid -1;
            }// right sorted
        }
        return -1;
    }
    int binarySearch(vector<int>&nums, int start, int end, int target){
        if(start > end) return -1;
        int mid = (start + end)/2;
        if(target == nums[mid]) return mid;
        if(target > nums[mid]) return binarySearch(nums, mid+1, end, target);
        return binarySearch(nums, start, mid-1, target);
    }
    
    
    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
        //cout<<pivot;
        if(pivot == -1) return binarySearch(nums, 0, nums.size()-1, target);
        if(nums[pivot] == target) return pivot;
        if(nums[0] <= target) return binarySearch(nums, 0, pivot-1, target);
        return binarySearch(nums, pivot+1, nums.size()-1, target);
    }
};