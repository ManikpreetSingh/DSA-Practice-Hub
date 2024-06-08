// Lower Bound using binary search
static int lb(int arr[] , int x){
        int ans = arr.length;
        int low = 0;
        int high = arr.length-1;
        while (low<=high) {
            int mid = (low+high)/2;
            if(arr[mid]>=x){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
            
        }
        return ans;
    }
 public static void main(String[] args) {
    int arr[] = {1,2,3,4,5,6,6,7};
    int x = 3;
    System.out.println(lb(arr,x));
 }   
// Upper bound using binary search
 static int lb(int arr[] , int x){
        int ans = arr.length;
        int low = 0;
        int high = arr.length-1;
        while (low<=high) {
            int mid = (low+high)/2;
            if(arr[mid]>x){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
            
        }
        return ans;
    }
 public static void main(String[] args) {
    int arr[] = {1,2,3,4,5,6,6,7};
    int x = 3;
    System.out.println(lb(arr,x));
 }   
