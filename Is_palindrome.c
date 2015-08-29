#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int pal(char[]);
void main()
{
	char inp[10];
	int res;
	printf("\nEnter a string :");
	scanf("%s", &inp);
	res = pal(inp);
	if (res)
	{
		printf("\nInput string is a palindrome\n");
	}
	else
	{
		printf("\nInput string is not a palindrome\n");
	}
}
int pal(char inp[10])
{
	int i, j, len;
	for (len = 0; inp[len] != '\0'; len++);
	for (i = 0; inp[i] == ' '; i++)
		for (j = i; j < len - 1;j++)
             inp[j] = inp[j + 1];
	for (i = 0, j = len-1; i<j; i++, j--)
		if (inp[i] != inp[j])
			return 0;
	printf("\nString length is %d", len);
	return 1;
}