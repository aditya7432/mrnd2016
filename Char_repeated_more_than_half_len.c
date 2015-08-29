#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char rep(char[],int);
void main()
{
	char inp[10], res;
	char n;
	printf("\nEnter a string :");
	scanf("%s", &inp);
	for (n = 0; inp[n] != '\0'; n++);
	if (n == 1)
	{
		res = inp[0];
		printf("\nCharacter is : %c \n", res);
		exit(1);
	}
	res = rep(inp, n);
	printf("\nCharacter is : %c \n", res);
}
char rep(char inp[10], int n)
{
	int i, j, count = 0;
	for (i = 0; i < n-1;i++)
	{
		count = 1;
		for (j = 0; j < n-1; j++)
		{
			if (inp[i] == inp[j])
				count++;
		}
		if (count > n/2)
			return inp[i];
	}
	return '\0';

}
	