Book Allocation
  
public class BookAllocation {
    static boolean isSolution(int arr[], int n, int m, int mid) {
        int studentCount = 1;
        int pageSum = 0;
        for (int i = 0; i < n; i++) {
            if (pageSum + arr[i] <= mid) {
                pageSum += arr[i];
            } else {
                studentCount++;
                if (studentCount > m || arr[i] > mid) {
                    return false;
                }
                pageSum = arr[i];
            }
        }
        return true;
    }

    public static int findPages(int arr[], int n, int m) {
        
        if (m > n) {
            return -1;
        }

        int low = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        int high = sum;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (isSolution(arr, n, m, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        
        int[] arr1 = {12, 34, 67, 90};
        int n1 = arr1.length;
        int m1 = 2;
        System.out.println(findPages(arr1, n1, m1)); //  output  =  113
        int[] arr2 = {12, 34, 67, 90};
        int n2 = arr2.length;
        int m2 = 5;
        System.out.println(findPages(arr2, n2, m2)); //  output: -1
    }
}
