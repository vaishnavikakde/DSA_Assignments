//to find rank of an element in a stream of integers. rank: rank of a given integer "x", in stream is "total no. of ele's less than or equal to x (including x).

//Input: { 10, 20, 15, 3, 4, 4, 1 }

//Ouput: Rank of 4 is: 4

#include<stdio.h>

#define SIZE 7

int rank(int arr[SIZE], int ele)
{
	int i, count;
	for(i=0; i<SIZE; i++)
	{
		if(arr[i] <= ele)
			count++;
	}
	return count;
}

int main()
{
	int x;
	int arr[SIZE] = { 10, 20, 15, 3, 4, 4, 1 };
	printf("Enter an element whose rank we need to find : ");
	scanf("%d", &x);

	int r = rank(arr, x);
	if(r == -1)
		printf("Elemet is not in the Stream!\n");
	else
		printf("Rank of %d is : %d\n", x, r);
	return 0;
}
