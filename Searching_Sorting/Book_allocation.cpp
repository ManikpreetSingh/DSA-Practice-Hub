// Ques link -> https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/0
// Allocate minimum number of pages
// You don't need to read input or print anything. Your task is to complete the function findPages() which takes 2 Integers N, and m and an array A[] of length N 
// as input and returns the expected answer.
// Expected Time Complexity: O(NlogN)
// Expected Auxilliary Space: O(1)
// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order.


class Solution 
{
    public:
    bool possiblesol(int a[],int n,int m,int sol){
        int pagesum=0;
        int c=1;
        for(int i=0;i<n;i++){
            if(a[i]>sol){
                return false;
            }
            if(pagesum+a[i]>sol){
                c++;
                pagesum=a[i];
                if(c>m){
                 return false;   
                }
                
            }
            else
            pagesum+=a[i];
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        int s=0,e=accumulate(A,A+N,0),ans,mid;
        if(M>N){return -1;}
      while(s<=e){
          mid=(s+e)/2;
          if(possiblesol(A,N,M,mid)){
              ans=mid;
              e=mid-1;
          }
          else
          s=mid+1;
      }
      return ans;
    }
};
