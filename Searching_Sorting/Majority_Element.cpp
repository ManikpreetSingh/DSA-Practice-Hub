// link -> https://www.geeksforgeeks.org/problems/majority-element-1587115620/1
//Ques -> Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears 
//strictly more than N/2 times in the array.

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int cnt =0;
        int el;
        
        for(int i =0 ;i< size ; i++){
            if(cnt == 0){
                cnt =1 ;
                el = a[i];
            }else if(el == a[i]){
                cnt++;
            }else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<size;i++){
            if(a[i] == el ){
                cnt1++;
            }
        }
        if(cnt1 > (size/2)){
            return el;
        }else{
            return -1;
        }
        
    }
};
