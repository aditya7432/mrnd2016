#include<stdio.h>
#include<conio.h>
int product(int, int);
void main()
{
	int x, y, res;
	printf("Enter x value : ");
	scanf("%d", &x);
	printf("\nEnter y value : ");
	scanf("%d", &y);
	res = product(x, y);
	printf("\nProduct is %d", res);
	printf("\n");
}
int product(int x, int y)
{
	int res = 0;
		while (y > 0)
		{
			res += ((y & 1) > 0) ? x : 0;
			x <<= 1;
			y >>= 1;
		}
		return res;
}
