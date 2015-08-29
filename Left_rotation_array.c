#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int * shift(int *, int, int);
void main()
{
	int n, *inp, *res, size, i;
	printf("\n Enter size of array :");
	scanf("%d", &size);
	inp = (int*)malloc(size*sizeof(int));
	printf("\n Enter array elements :\n");
	for (i = 0; i < size; i++)
		scanf("%d", &inp[i]);
	printf("\n Enter number of rotations : ");
	scanf("%d", &n);
	if (n > size)
		n = n%size;
	res = shift(inp, n, size);
	printf("\n Rotation succesful. Modified array is :\n ");
	for (i = 0; i < size; i++)
		printf("\t%d", res[i]);
	printf("\n");
}
int * shift(int *arr, int n, int size)
{
	int i = 0, temp, j, temp1;
	for (i = 0; i < n; i++)
	{
		temp = arr[size - 1];
		for (j = size - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}
	return arr;
}