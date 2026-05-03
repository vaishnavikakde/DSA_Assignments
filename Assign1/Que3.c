//Implement binary search algorithm if array is sorted in descending order.
#include<stdio.h>
#define SIZE 6

int binary_search(int arr[SIZE], int key)
{
	int mid, left = 0, right = SIZE-1;
	while(left <= right)
	{
		for(int i=0; i<SIZE; i++)
		{
			mid = (left + right)/2;
			if(arr[mid] == key)
				return mid;
			if(key < arr[mid])
				left = mid - 1;
			else
				right = mid + 1;
		}

	}
}

int main()
{
		
	int arr[SIZE];
	int key;	
	
	printf("Enter 6 Elements of Array : ");
	for(int i=0; i<SIZE; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter a key to Search : ");
	scanf("%d", &key);

	int index = binary_search(arr, key);
	if(index == -1)
		printf("Invalid Index\n");
	else
		printf("Key FOund at Index : %d\n", index);

	return 0;
}

