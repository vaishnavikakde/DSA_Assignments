//find the first non-repeating element: Input: { 1, 2, 3, -1, 2, 1, 0, 4, -1, 7, 8 } Ouput: 3

#include<stdio.h>

#define SIZE 11

int first_non_repeating(int arr[SIZE])
{
	int i,j;
	for(i=0; i<SIZE; i++)
	{
		int cnt = 0;
		for(j=0; j<SIZE; j++)
		{
			if(arr[i] == arr[j])
				cnt++;
		}
		if(cnt == 1)
			return arr[i];

	}
	return -1;
}

int main()
{
	int arr[] = { 1, 2, 3, -1, 2, 1, 0, 4, -1, 7, 8 };
	
	int ele = first_non_repeating(arr);
	if(ele == -1)
		printf("No non repeating element found!\n");
	else
		printf("First non repeating element is : %d\n", ele);
	return 0;
}
