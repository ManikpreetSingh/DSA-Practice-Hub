import java.util.Arrays;

/**
 * searchelementusingbinarysearch
 */
public class searchelementusingbinarysearch {

    static int BS(int arr[], int target){
        Arrays.sort(arr);
        int low = 0;
        int high = arr.length-1;
        while (low<=high) {
            int mid = (low+high)/2;
            if(arr[mid] == target)
            return mid;
            else if(target>arr[mid])
            low = mid + 1;
            else
            high = mid-1;
            
        }

        return -1;
    }
    public static void main(String[] args) {
        int arr[] = {5,2,4,6,8,9,7,3};
        int target = 3;
        System.out.print(BS(arr,target));
    }
}

// implement using recursion
import java.util.Arrays;

public class Solution {
    public static int search(int []arr, int target) {
        Arrays.sort(arr); // Sort the array once before starting the binary search
        return binarySearch(arr, 0, arr.length - 1, target);
    }

    private static int binarySearch(int[] arr, int low, int high, int target) {
        if (low > high) {
            return -1;
        }

        int mid = (low+high)/2; 

        if (arr[mid] == target) {
            return mid;
        } else if (target > arr[mid]) {
            return binarySearch(arr, mid + 1, high, target);
        } else {
            return binarySearch(arr, low, mid - 1, target);
        }
    }
}

