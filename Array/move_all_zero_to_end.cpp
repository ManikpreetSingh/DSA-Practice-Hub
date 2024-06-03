
public class MoveAllZerotoend {

    static void sort(int arr[]) {
        if(arr.length == 0 || arr.length==1){
                return;
            }
        int left = 0;
        int right = arr.length - 1;
       while (left<right) 
       {
            if (arr[left] == 0) {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                right--;
            }else{
                left++;

            } 
        }
    }

    static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int arr[] = { 1, 0, 0, 2, 3 ,0,1,0,4};
        sort(arr);
        printArray(arr);
    }

}
