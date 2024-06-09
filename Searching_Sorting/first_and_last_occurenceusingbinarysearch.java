import java.util.Arrays;

public class firstandlastoccurence {
    static int first(int arr[], int target){
        Arrays.sort(arr);
        int low = 0;
        int high = arr.length-1;
        int result = -1;
        while (low<=high) {
            int mid = (low+high)/2;
            if (arr[mid] == target) {
              result = mid;
              high = mid-1;  
            }
            else if(target>arr[mid])
            low = mid+1;
            else
            high = mid-1;
            
        }
        return result;
    }
    static int last(int arr[], int target){
        Arrays.sort(arr);
        int low = 0;
        int high = arr.length-1;
        int result = -1;
        while (low<=high) {
            int mid = (low+high)/2;
            if (arr[mid] == target) {
              result = mid;
                low = mid+1;  
            }
            else if(target>arr[mid])
            low = mid+1;
            else
            low = mid+1; 
            
        }
        return result;
    }
    public static void main(String[] args) {
        int arr[] = {1,2,3,3,4,5,6};
        int target = 3;
        System.out.println("First occurence of the element "+first(arr,target));
        System.out.println("Last occurence of the element "+last(arr,target));



    }   
}
