#include <stdio.h>

int main(void)
{
	int arr[] = { 30, 42, 187, 19, 111 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Values in array : ");

	for (int index = 0; index < n; index++)
		printf("%d ", arr[index]);

	printf("\nLargest value of array is %d\n", largest(arr,n));

	return 0;
}

int largest(int arr[], int n)
{
	int index;
	int max = arr[0];

	for (index = 1; index < n; index++) {
		if (arr[index] > max)
			max = arr[index];
	}

	return max;
}