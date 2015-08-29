
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void swap_ele(int*, int);
void main()
{

	int *inp, n, i;
	printf("\nEnter size of array : ");
	scanf("%d", &n);
	inp = (int*)malloc(n*sizeof(int));
	printf("\nEnter %d elements ", n);
	for (i = 0; i < n; i++)
		scanf("%d", &inp[i]);
	swap_ele(inp, n);
	printf("\nSorted elements are ");
	for (i = 0; i < n; i++)
		printf("%d\t", inp[i]);
	printf("\n");
}

void swap_ele(int inp[], int n)
{

	int i, j, temp;
	for (i = 0; i < n; i++)
	{
		if (!(inp[i + 1] > inp[i]))
		{
			j = i - 1;
			while (j<n&&inp[i]>inp[j])
				j++;
			temp = inp[i];
			inp[i] = inp[j + 1];
			inp[j + 1] = temp;
			break;
		}
	}
}
