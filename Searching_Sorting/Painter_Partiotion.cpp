//QUES LIMK -> https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
//QUES Dilpreet wants to paint his dog's home that has n boards with different lengths. 
// The length of ith board is given by arr[i] where arr[] is an array of n integers. He hired k painters for this work and each painter 
// takes 1 unit time to paint 1 unit of the board.  The problem is to find the minimum time to get this job done if all painters start together
// with the constraint that any painter will only paint continuous boards, say boards numbered {2,3,4} or only board {1} or nothing but not
// boards {2,4,5}.

class Solution
{
  public:
    bool isPossibleSol(int a[],int n , int k , long long mid){
        int timesum = 0;
        int cnt = 1;
        for(int i= 0 ;i < n;i++){
            if(a[i]>mid){
                return false;
            }
            if(a[i]+timesum > mid){
                cnt++;
                timesum = a[i];
                if(cnt>k)return false;
        }else{
            timesum += a[i];
        }
    }
    return true;
    }
    long long minTime(int arr[], int n, int k)
    {
    long long start = 0 , end = 0 , ans = -1;
    for(int i = 0 ;i < n ;i++){
        end += arr[i];
    }
  
    while(start <= end){
        long long mid = start + ( end - start)/2;
            if(isPossibleSol(arr,n,k,mid)){
                ans = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        return ans;
    }
};
