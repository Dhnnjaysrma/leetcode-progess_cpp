class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        const int n = arr.size();
        int i = 0;
        int j = n-1;
        while(i <= j){
            int mid = i + (j-i)/2;
            if((mid-1<0 || arr[mid-1] < arr[mid]) && (mid+1>=n || arr[mid] > arr[mid,mid+1]))
                return mid;
            if((mid-1<0 || arr[mid-1] < arr[mid]))
                i = mid + 1;
            else
                j = mid - 1;
        }
        return -1;
    }
};
