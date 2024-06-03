
import java.util.*;
public class merge2sortedarrusingSorting {
    static void printArray(int arr[]){
        for (int j = 0; j < arr.length; j++) {
            
            System.out.print(arr[j]+" ");
        }
        System.out.println();
    }
    static void merge(int[] arr1, int arr2[], int n, int m) {
        int left = n - 1;
        int right = 0;

//swap
        while (left>=0 && right<m) {
            if(arr1[left] > arr2[right]){
                int temp = arr1[left];
                arr1[left] = arr2[right];
                arr2[right] = temp;
                left--;
                right++;
            }
            else {
                break;
            }
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);

    }

    public static void main(String[] args) {
        int[] arr1 = { 1, 3, 5, 7 };
        int[] arr2 = { 0, 2, 6, 8, 9 };

        System.out.println("Without apply algo");
        printArray(arr1);
        printArray(arr2);

        int n = arr1.length;
        // System.out.println(m);
        int m = arr2.length;
        // System.out.println(n);
        merge(arr1, arr2, n, m);
        System.out.println("The merged arrays are:");
        System.out.print("arr1[] = ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr1[i] + " ");
        }

        System.out.println(

        );
   
        System.out.print("arr2[] = ");
        for (int i = 0; i < m; i++) {
            System.out.print(arr2[i] + " ");
        }
        System.out.println();

    }
}
