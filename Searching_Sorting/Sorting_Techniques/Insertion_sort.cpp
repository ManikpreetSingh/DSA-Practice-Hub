//Ques Link :->https://www.geeksforgeeks.org/problems/insertion-sort/1
//Ques :->Perform insertion sort;

class Solution
{
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code 
        
        for(int i = 0; i<= n-1;i++){
            int j  = i;
            while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
                j--;
            }
            
        }
        
    }
};
