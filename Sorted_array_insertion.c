#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int* insert(int *, int, int);
void main()
{
	int size, *arr, ins, i = 0, n;
	printf("\nEnter size of array :");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("\n Error: size of array cant be nagative\n");
		exit(0);
	}
	arr = (int*)malloc((n + 1)*sizeof(int));
	printf("\n Enter %d elements :", n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("\nEnter the number to be inserted :");
	scanf("%d", &ins);
	arr = insert(arr, n, ins);
	printf("\n Insertion succesfull. The new array is : \n");
	for (i = 0; i < n + 1; i++)
		printf("\t%d", arr[i]);
	getch();
}
int * insert(int *arr, int n, int ins)
{
	int i = 0, j = 0, temp;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > ins)
			break;
	}
	for (j = n; j > i; j--)
		arr[j] = arr[j - 1];
	arr[j] = ins;
	return arr;
}
