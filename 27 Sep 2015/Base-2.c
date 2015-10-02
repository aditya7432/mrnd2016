#include<stdio.h>
#include<conio.h>
void base(int num);
int main()
{
	int inp;
	printf("\nEnter an input (decimal format) : ");
	scanf("%d", &inp);
	base(inp);
	printf("\n");
	return 0;
}
void base(int num)
{
	int arr[100], i = 0, n=0, j=0;
	n = num;
	while (n != 0)
	{
		arr[i] = n % 2;
		n = n / 2;
		i++;
	}
	n = i;
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			if ( i == n - 1)
				n++;
			if (arr[i + 1] == 0 || arr[i + 1] == 1)
				arr[i + 1] = arr[i + 1] + 1;
			else
				arr[i + 1] = 1;
		}
		if (arr[i] > 1)
		{
			if (i == n - 1)
				n++;
			if (arr[i + 1] == 0 || arr[i + 1] == 1)
				arr[i + 1] = arr[i + 1] + 1;
			else
				arr[i + 1] = 1;
			if (arr[i] % 2 == 0)
				arr[i] = 0;
			else
				arr[i] = 1;			
		}
	}
   printf("\nRepresentation in base -2 : ");
	for (j = i-1; j >= 0; j--)
		printf("%d", arr[j]);
}