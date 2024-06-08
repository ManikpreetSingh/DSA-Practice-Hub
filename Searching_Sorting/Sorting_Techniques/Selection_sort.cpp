//LINK :- https://www.geeksforgeeks.org/problems/selection-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=selection-sort
//Ques perform selection Sot
int select(int arr[], int n)
    {
        // code here such that selectionSort() sorts arr[]
        
        for(int i = 0; i< n -1 ; i++){
            int mini = i;
            for(int j = i + 1 ; j < n;j++){
                if(arr[j]<arr[i]){
                    mini = j;
                }
            }
            swap(arr[mini],arr[i]);
        }
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       select(arr,n);
    }
