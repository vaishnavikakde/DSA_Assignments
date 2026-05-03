//Write a linear search algorithm to return index of last occurance of key.

#include<stdio.h>
#define SIZE 6


int linear_search(int arr[SIZE], int key)
{
	int last_index;
	for(int i=0; i<SIZE; i++)
	{
		if(key == arr[i])
			last_index = i;

	}
	return last_index;

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

	printf("Enter a Key to Search : ");
	scanf("%d", &key);
	int index = linear_search(arr, key);
	if(index == -1)
		printf("Invalid Index\n");
	else	
		printf("Index : %d\n", index);

	return 0;
}
