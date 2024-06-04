//Ques Link -> https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
//Ques -> Given a sorted array arr containing n elements with possibly some duplicate, the task is to find the first and last occurrences of an element x in the given array.
// Note: If the number x is not found in the array then return both the indices as -1.

class Solution
{
    public:
        int first_occur(int arr[], int low, int high, int x) {
        int res = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(arr[mid] == x) {
                res = mid;
                high = mid - 1;  // Move to left half to find the first occurrence
            } else if(arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return res;
    }
    
    int last_occur(int arr[], int low, int high, int x) {
        int res = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(arr[mid] == x) {
                res = mid;
                low = mid + 1;  // Move to right half to find the last occurrence
            } else if(arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return res;
    }
    vector<int> find(int arr[], int n , int x )
    {
     int first = first_occur(arr, 0, n - 1, x);
     int last = last_occur(arr, 0, n - 1, x);
     return {first, last}; 
    }
};
  
