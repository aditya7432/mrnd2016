#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int len(char[]);
void main()
{
	int res, i = 0;
	char *inp = (char*)malloc(10 * sizeof(char));
	printf("\nEnter a string :");
	gets(inp);
	res = len(inp);
	printf("\nString length is %d\n", res);
}
int len(char *inp)
{
	int i = 0;
	while (inp[i] != '\0')
		i++;
	return i;
}