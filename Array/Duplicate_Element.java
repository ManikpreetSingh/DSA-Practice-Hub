public class Duplicate_Element {
    static void printArray(int arr[]){
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

    static int dup(int arr[]){
        for (int i = 0; i < arr.length; i++) {
            int index = Math.abs(arr[i]);
            if(arr[index]<0 )
            return index;
            arr[index] = -arr[index];

        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[] = {1,3,4,2,2};
        System.out.println(dup(arr));
        
    }
