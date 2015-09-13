#include<stdio.h>
#include<conio.h>
int * sort1(int[], int);
int * sort2(int[], int);
int * sort3(int[], int);
int * sort4(int[], int);
void main()
{
	int len, arr[100],i,*p;
	printf("\nEnter length of array :");
	scanf("%d", &len);
	printf("\nEnter array elements :\n");
	for (i = 0; i < len; i++)
		scanf("%d", &arr[i]);
	p=sort4(arr, len);
	printf("\nSorted array is : \n");
	for (i = 0; i < len; i++)
		printf("\t%d", p[i]);
	printf("\n");
}
int * sort1(static int arr[100], int len)
{
    int count = 0, i = 0;
	for (i = 0; i < len; i++)
	{
		if (arr[i] == 0)
			count++;
		arr[i] = 0;
	}
	for (i = count; i < len; i++)
		arr[i] = 1;
	return arr;
}

int * sort2(static int arr[100], int len)
{
	int sum = 0, i = 0;
	for (i = 0; i < len; i++)
	{
		sum = sum + arr[i];
		arr[i] = 0;
	}
	for (i = sum+1; i < len; i++)
		arr[i] = 1;
	return arr;
}

int * sort3(int arr[100], int len)
{
	int i = 0, j = 0, temp = 0, exch = 0;
	for (i = 1; i < len; i++)
	{
		exch = 0;
		for (j = 0; j < len - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
			    arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				exch++;
			}
		}
		if (exch == 0)
			break;
	}
	return arr;
}

int * sort4(static int arr[100], int len)
{
	int i = 0, j = len;
	for (i = 0; i < len/2; i++)
	{
		if (arr[i] == 1)
			while (arr[j] != 0)
				j--;	
		arr[i] = 0;
		arr[j] = 1;
				
	}
	return arr;
}
