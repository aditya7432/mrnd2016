#include<stdio.h>
#include<conio.h>
void tuple_sum(int*, int,int);
void main()
{
	int sum,i,*arr,n;
	printf("\nEnter size of array :");
	scanf("%d", &n);
	arr = (int*)malloc(n*sizeof(int));
	printf("\nEnter array elements : \n");
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("\nEnter the required sum :");
	scanf("%d", &sum);
	tuple_sum(arr, n, sum);
}
void tuple_sum(int *arr, int n, int sum)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (arr[j] == arr[j + 1])
				break;
			if (arr[i] + arr[j] == sum)
				printf(" { %d , %d } \n", arr[i], arr[j]);
		}
	}
}