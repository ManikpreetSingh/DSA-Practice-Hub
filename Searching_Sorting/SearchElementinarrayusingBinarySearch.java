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
