#include<stdio.h>
#include<conio.h>
void revSen(char[],int);
void revWords(char[], int);
void main()
{
	char inp[20];
	int len = 0;
	printf("\nEnter a sentence:  ");
	scanf("%80[^\n]", &inp);
	for (len = 0; inp[len] != '\0'; len++);
	printf("\nString after reversing words is \n");
	revSen(inp, len);
	
}
void revSen(char inp[20],int len)
{
	int i=0,j=0;
	char temp;
	j = len - 1;
	while (i < j)
	{
		temp = inp[i];
		inp[i] = inp[j];
		inp[j] = temp;
		i++;
		j--;
	} 
	revWords(inp, len);
}
void revWords(char inp[20], int len)
{
	int i,j;
	for (i = 0; inp[i] != '\0'; i++)
	{
		if (inp[i + 1] == ' ' || inp[i + 1] == NULL)
		{
			for (j = i; j >= 0 && inp[j] != ' '; j--)
				printf("%c", inp[j]);
		}
		printf(" ");
	}
	printf("\n");
	return;
}