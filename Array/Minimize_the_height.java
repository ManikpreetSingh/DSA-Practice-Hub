import java.util.Arrays;

public class MinimizingtheHeight {

    static int getMin (int arr[], int k, int n){
        Arrays.sort(arr);
        if(n==1) return 0;
        int diff= arr[n-1]-arr[0];

        int max,min;
        for (int i = 1; i < arr.length; i++) {
            if (arr[i]-k<0) continue;
            max = Math.max(arr[i-1]+k, arr[n-1]-k);
            min = Math.min(arr[0]+k, arr[i]-k);
            diff = Math.min(diff, max-min);
        }
        return diff;
    }

    public static void main(String[] args) {
        int arr[] = {3, 9, 12, 16, 20};
        int k = 3;
        int n = arr.length;
        System.out.println(getMin(arr,k,n));
    }
}
