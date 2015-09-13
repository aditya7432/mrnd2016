#include<stdio.h>
#include<conio.h>
int pow1(int, int, int);
void main()
{
	unsigned int x, y, a,res;
	printf("\nEnter value of x:");
	scanf("%d", &x);
	printf("\nEnter value of y:");
	scanf("%d", &y);
	printf("\nEnter value of a:");
	scanf("%d", &a);
	if (a == 0)
		printf("\nError");
	res = pow1(x, y, a);
	printf("\nanswer = %d", res);
	printf("\n");
}
int pow1(int x, int y, int a)
{
	int r = 1, i = 0, d = y, n, k;
	int b[1000];
	for (i = 1; i <= y; i++)
	{
		if (i == 1)
		{
			n = i;
			b[i] = x%a;
		}
		if (n == 0)
		{
			n = i;
			b[i] = (b[i / 2] * b[i / 2]) % a;

		}
		n--;
	}
	n = i;
	if (i % 2 == 1)
	{
		k = (i / 2) + 1;
	}
	else
	{
		k = (i / 2);
	}
	for (i = i; i >= 1; i--)
	{
		if (n == k)
		{
			k = i / 2;
			if (d >= i)
			{
				r = (b[i] % a)*r;
				d = d - i;
			}
		}
		n--;
	}
	r = r%a;
	if (x == y&&y % 2 == 1)
	{
		r = r + 1;
	}
	return(r);
}