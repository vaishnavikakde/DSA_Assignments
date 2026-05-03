//Implement linear search algorithm to find the nth occurence of the given element. If nth occurrence is not found, return -1.

#include<stdio.h>
#define SIZE 10

int nth_occurrence(int arr[SIZE], int key, int n);

int main()
{
    int arr[SIZE] = {10, 20, 30, 20, 40, 20, 50, 20, 60, 20};
    int key, n;

    printf("Enter key: ");
    scanf("%d", &key);

    printf("Enter occurrence number (n): ");
    scanf("%d", &n);

    int index = nth_occurrence(arr, key, n);

    if(index == -1)
        printf("Nth occurrence not found\n");
    else
        printf("%dth occurrence of key is at index %d\n", n, index);

    return 0;
}

int nth_occurrence(int arr[SIZE], int key, int n)
{
    int count = 0;

    for(int i = 0; i < SIZE; i++)
    {
        if(arr[i] == key)
        {
            count++;
            if(count == n)
                return i;
        }
    }

    return -1;  // nth occurrence not found
}
