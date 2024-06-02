//QUESTION LINK -->https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/0
//QUES :-> Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.
If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

// METHOD :-> TWEAKING the Merge sort To get the inversion count 
//CODE:->
class Solution{
     private:
    // Function to perform merge sort and count inversions
    long long mergeSort(long long arr[], long long temp[], long long left, long long right) {
        long long mid, inv_count = 0;
        if (right > left) {
            mid = (right + left) / 2;

            inv_count += mergeSort(arr, temp, left, mid);
            inv_count += mergeSort(arr, temp, mid + 1, right);

            inv_count += mergeAndCount(arr, temp, left, mid, right);
        }
        return inv_count;
    }

    // Function to merge two subarrays and count inversions
    long long mergeAndCount(long long arr[], long long temp[], long long left, long long mid, long long right) {
        long long i = left;    // Starting index for left subarray
        long long j = mid + 1; // Starting index for right subarray
        long long k = left;    // Starting index to be sorted
        long long inv_count = 0;

        while ((i <= mid) && (j <= right)) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                inv_count += (mid - i + 1);
            }
        }

        // Copy the remaining elements of left subarray, if any
        while (i <= mid)
            temp[k++] = arr[i++];

        // Copy the remaining elements of right subarray, if any
        while (j <= right)
            temp[k++] = arr[j++];

        // Copy the sorted subarray into Original array
        for (i = left; i <= right; i++)
            arr[i] = temp[i];

        return inv_count;
    }
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long temp[N];
        return mergeSort(arr, temp, 0, N - 1);
    }

};

//{ Driver Code Starts.
