//QUES Given two sorted arrays, find their union and intersection.
// Union of Two-Sorted Arrays using Two-Pointers
// To find union of two sorted arrays using two pointers, follow the following procedure : 

// 1.Use two index variables i and j, initial values i = 0, j = 0 
// 2.If arr1[i] is smaller than arr2[j] then print arr1[i] and increment i. 
// 3.If arr1[i] is greater than arr2[j] then print arr2[j] and increment j. 
// 4.If both are same then print any of them and increment both i and j. 
// 5.Print remaining elements of the larger array.
// Below is the implementation of the above approach :

void printUnion(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j])
			cout << arr1[i++] << " ";

		else if (arr2[j] < arr1[i])
			cout << arr2[j++] << " ";

		else {
			cout << arr2[j++] << " ";
			i++;
		}
	}

	/* Print remaining elements of the larger array */
	while (i < m)
		cout << arr1[i++] << " ";

	while (j < n)
		cout << arr2[j++] << " ";
}

// INTERSECTION USING 2P APPROACH
// To find intersection of two sorted arrays using two-pointers, follow the below approach : 

// 1.Use two index variables i and j, initial values i = 0, j = 0 
// 2.If arr1[i] is smaller than arr2[j] then increment i. 
// 3.If arr1[i] is greater than arr2[j] then increment j. 
// 4.If both are same then print any of them and increment both i and j.
// Below is the implementation of the above approach :


void printIntersection(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j])
			i++;
		else if (arr2[j] < arr1[i])
			j++;
		else /* if arr1[i] == arr2[j] */
		{
			cout << arr2[j] << " ";
			i++;
			j++;
		}
	}
}


