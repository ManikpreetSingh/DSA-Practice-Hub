import java.util.*;

public class SearchInRotateArrayII {
    public static boolean search(int[] arr, int n, int k) {
        int low = 0;
        int high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == k) 
                return true;
                if(arr[low] == arr[mid ] && arr[mid] == arr[high]){
                    low = low + 1;
                    high = high -1;
                    continue;
                }
            
            // if left part is sorted
            if (arr[low] <= arr[mid]) {
                if (arr[low] <= k && k <= arr[mid]) {
                    // element exists in left part
                    high = mid - 1;
                } else {
                    // element does not exist in left part
                    low = mid + 1;
                }
            } else { // if right part is sorted
                if (arr[mid] <= k && k <= arr[high]) {
                    // element exists in right part
                    low = mid + 1;
                } else {
                    // element does not exist in right part
                    high = mid - 1;
                }
            }
        }
        return false; // element is not found
    }

    public static void main(String[] args) {
        int[] arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
        int x = 1;
        int n = arr.length;
        System.out.println(search(arr, n, x));
       
    }
}
