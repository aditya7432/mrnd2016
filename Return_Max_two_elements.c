#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void max_ele(int*,int,int*);
void main()
{
	int *arr, i, n,*res;
	res = (int*)malloc(2 * sizeof(int));
	printf("\nEnter array length :");
	scanf("%d", &n);
	arr = (int*)malloc(n*sizeof(int));
	printf("\nEnter array elements :\n");
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	 max_ele(arr,n,res);
	printf("\nFirst max element is %d", res[0]);
	printf("\nSecond max element is %d\n", res[1]);
}
void max_ele(int *arr, int n,int *res)
{
	int i = 0, max1 = arr[0], max2 = arr[1], temp;
	
	for (i = 0; i < n; i++)
	{
		if (max2 > max1)
		{
			temp = max2;
			max2 = max1;
			max1 = temp;
		}
		if (arr[i] > max1)
			max1 = arr[i];
		else if (arr[i] > max2&&arr[i] < max1)
			max2 = arr[i];
	}
	res[0] = max1;
	res[1] = max2;
	//printf("\n Max 1 = %d \n Max 2 = %d", max1, max2);
	//return res;
}

