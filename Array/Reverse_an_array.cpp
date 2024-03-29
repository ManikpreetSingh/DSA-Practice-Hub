// Array reverse or reverse a array means changing the position of each number of the given array to its opposite position from end,
// i.e. if a number is at position 1 then its new position will be Array.length, similarly if a number is at position 2 then its new position will be Array.length – 1, and so on.

// You Can reverse an array in five diffrent ways:-
// 1. Array Reverse Using an Extra Array (Non In-place):
#include <iostream>
using namespace std;

void reverseArrayExtraArray(int arr[], int size) {
	int reversedArr[size];
	for (int i = 0; i < size; i++) {
		reversedArr[i] = arr[size - i - 1];
	}

	// Print reversed array
	cout << "Reversed Array: ";
	for (int i = 0; i < size; i++) {
		std::cout << reversedArr[i] << " ";
	}
}

int main() {
	int originalArr[] = {1, 2, 3, 4, 5};
	int size = sizeof(originalArr) / sizeof(originalArr[0]);
	
	reverseArrayExtraArray(originalArr, size);
}

// TC -> O(N)
// SC -> O(N)

// 2. Array Reverse Using a Loop (In-place):(2 Pointer approach)

// Iterative C++ program to reverse an array 
#include <bits/stdc++.h> 
using namespace std; 

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end) 
{ 
	while (start < end) 
	{ 
		int temp = arr[start]; 
		arr[start] = arr[end]; 
		arr[end] = temp; 
		start++; 
		end--; 
	} 
}	 

/* Utility function to print an array */
void printArray(int arr[], int size) 
{ 
for (int i = 0; i < size; i++) 
cout << arr[i] << " "; 

cout << endl; 
} 

/* Driver function to test above functions */
int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5, 6}; 
	
	int n = sizeof(arr) / sizeof(arr[0]); 

	// To print original array 
	printArray(arr, n); 
	
	// Function calling 
	rvereseArray(arr, 0, n-1); 
	
	cout << "Reversed array is" << endl; 
	
	// To print the Reversed array 
	printArray(arr, n); 
	
	return 0; 
} 
// Time Complexity: O(n)
// Auxiliary Space Complexity: O(1)

// 3. Array Reverse Inbuilt Methods (Non In-place):
#include <iostream>
#include <algorithm> // for std::reverse

int main() {
	int originalArray[] = {1, 2, 3, 4, 5};
	int length = sizeof(originalArray) / sizeof(originalArray[0]);

	// Using inbuilt method in C++
	std::reverse(originalArray, originalArray + length);

	// Print the reversed array
	for (int i = 0; i < length; i++) {
		std::cout << originalArray[i] << " ";
	}

	return 0;
}
// Time Complexity: O(n) 
// Auxiliary Space Complexity: O(n)


// 4. Array Reverse Recursion (In-place or Non In-place):
// Recursive C++ program to reverse an array 
#include <bits/stdc++.h> 
using namespace std; 

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end) 
{ 
	if (start >= end) 
	return; 
	
	int temp = arr[start]; 
	arr[start] = arr[end]; 
	arr[end] = temp; 
	
	// Recursive Function calling 
	rvereseArray(arr, start + 1, end - 1); 
}	 


/* Utility function to print an array */
void printArray(int arr[], int size) 
{ 
for (int i = 0; i < size; i++) 
cout << arr[i] << " "; 

cout << endl; 
} 

/* Driver function to test above functions */
int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5, 6}; 
	
	// To print original array 
	printArray(arr, 6); 
	
	// Function calling 
	rvereseArray(arr, 0, 5); 
	
	cout << "Reversed array is" << endl; 
	
	// To print the Reversed array 
	printArray(arr, 6); 
	
	return 0; 
// } 
// Time Complexity: O(n). 
// Auxiliary Space Complexity: O(n) for non in-place, O(log n) for in-place (due to recursion stack).


// 5. Array Reverse Stack (Non In-place):
#include <iostream>
#include <stack>
#include <vector>

void reverseArrayUsingStack(int arr[], int size) {
	std::stack<int> stack;

	// Push elements onto the stack
	for (int i = 0; i < size; i++) {
		stack.push(arr[i]);
	}

	// Pop elements from the stack to reverse the array
	for (int i = 0; i < size; i++) {
		arr[i] = stack.top();
		stack.pop();
	}
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	reverseArrayUsingStack(arr, size);

	std::cout << "Reversed Array: ";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}

	return 0;
}
// Time Complexity: O(n)
// Auxiliary Space Complexity: O(n)



