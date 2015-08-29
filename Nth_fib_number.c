#include<stdio.h>
#include<conio.h>
int nth_fibo_num(int);
void main()
{
	int n, res;
	printf("\nEnter n value :");
	scanf("%d", &n);
	res = nth_fibo_num(n);
	printf("\nThe %d fibonacci number is %d", n, res);
}

int nth_fibo_num(int n)
{
	int arr[50],i;
	arr[0] = 0;
	arr[1] = 1;
    for (i = 2; i <= n; i++)
      arr[i] = arr[i - 1] + arr[i - 2];
    return arr[n];
}

