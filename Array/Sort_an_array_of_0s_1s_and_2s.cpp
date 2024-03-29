// Sort an array of 0s, 1s and 2s
// Problem Statement: Given an array consisting of only 0s, 1s, and 2s.
// Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)

// Link of problems
//LeetCode -> https://leetcode.com/problems/sort-colors/description/
// Code360 -> https://www.naukri.com/code360/problems/631055?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

Solution -- > 
//This problem is a variation of the popular Dutch National flag algorithm. 

// This algorithm contains 3 pointers i.e. low, mid, and high, and 3 main rules.  The rules are the following:

// arr[0….low-1] contains 0. [Extreme left part]
// arr[low….mid-1] contains 1.
// arr[high+1….n-1] contains 2. [Extreme right part], n = size of the array

// OPTIMAL APPROACH

  #include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here int n = arr.size();
  int mid = 0, low = 0, high = n-1;
  while (mid <= high) {
    if (arr[mid] == 0) {
      swap(arr[low], arr[mid]);
      low++;
      mid++;
    }
    else if (arr[mid] == 1) {
      mid++;
    }
    else {
      swap(arr[mid], arr[high]);
      high--;
    }
  }
}

// Time Complexity: O(N), where N = size of the given array.
// Space Complexity: O(1) as we are not using any extra space.

