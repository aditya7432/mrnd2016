#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int divisible(int);
void main()
{
	int inp, res;
	printf("Enter a number :");
	scanf("%d", &inp);
	if (inp == 0)
	{
		printf("\nThe number is divisible by 11\n");
		exit(1);
	}
	if (inp < 0)
		inp = -inp;
	res = divisible(inp);
	if (res)
	{
		printf("\nThe number is divisible by 11\n");
	}
	else
	{
		printf("\nThe number is not divisble by 11\n");
	}

}
int divisible(int inp)
{
	int i=0,temp=inp,d,even=0,odd=0,res;
	while (temp > 0)
	{
		even = even + temp % 10;
		temp = temp / 10;
		odd = odd + temp % 10;
		temp = temp / 10;
		i++;
	}
	if (i % 2 == 0)
	{
		temp = odd;
		odd = even;
		even = temp;
	}
	res = even - odd;
    if (res	< 0)
		res = -res;
	if (res == 0||res==11)
		return 1;
	else
		return divisible(res);
	if (res < 11)
		return 0;

	

}