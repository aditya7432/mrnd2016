#include<stdio.h>
#include<conio.h>
int * mul1(int[],int);
int * mul2(int[], int);
int * mul3(int[], int);
void main()
{
	int len, A[100], i,*p;
	printf("\nEnter length of array :");
	scanf("%d", &len);
	printf("\nEnter array elements :\n");
	for (i = 0; i < len; i++)
		scanf("%d", &A[i]);
	//p=mul1(A, len);
	//p=mul2(A, len);
   	p = mul3(A, len);
	printf("\n");
	for (i = 0; i < len; i++)
		printf("%d\t", p[i]);
	printf("\n");
}
int * mul1(int A[], int len)
{
	static int B[100], i = 0, j = 0, temp=0,product=1;
	for (i = 0; i < len; i++)
	{
		temp = A[i];
		A[i] = 1;
		for (j = 0; j < len; j++)
		{
			product = product*A[j];
		}
		A[i] = temp; 
		B[i] = product;
		product = 1;
	}
	return B;	
}
int * mul2(int A[], int len)
{
	static int i = 0, j = 0, B[100],product=1;
	for (i = 0; i < len; i++)
	{
		if (A[i] != 0)
			product = product*A[i];
	}
	for (i = 0; i < len; i++)
		B[i] = product;
	for (j = 0; j < len; j++)
		B[j] = B[j] / A[j];
	return B;
}
int * mul3(int A[100], int len)
{
	static int i, temp[50];
	temp[len - 1] = A[len - 1];
	for (i = len - 2; i >= 0; i--)
			temp[i] = temp[i + 1] * A[i];
	for (i = 0; i < len; i++)
	{
		if (i > 0)
			A[i] = A[i - 1] * A[i];
		if (i == 0)
			temp[i] = temp[i + 1];
		else if (i == len - 1)
			temp[i] = A[i - 1];
		else
			temp[i] = temp[i + 1] * A[i - 1];
	}
	return (temp);
}

       

