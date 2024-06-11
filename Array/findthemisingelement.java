public class FindtheMissingNumber {
    static int FM(int arr[]){
        int n = arr.length;
        int sum =(n*(n+1))/2;
        int sum2 =0;    
        for (int i = 0; i < arr.length; i++) {
            sum2+=arr[i];
        }
        int missingSum = sum-sum2;
        return missingSum;
    }
 public static void main(String[] args) {
    int arr[] = {1,2,4,5};
    System.out.println(FM(arr));
 }   
}
