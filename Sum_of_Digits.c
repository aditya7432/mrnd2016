#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
	int inp, res;
	printf("\nEnter a number :");
	scanf("%d", &inp);
	res = sum(inp);
	printf("\nSum of digits is : %d\n", res);
	getch();
}
int sum(int inp)
{
	int flag = 0;
	if (inp < 0)
	{
		inp = -inp;
		flag = 1;
	}

	int temp, res = 0;
	while (inp != 0)
	{
		temp = inp % 10;
		res = res + temp;
		inp = inp / 10;
	}
	if (flag == 1)
		return -res;
	return res;
}