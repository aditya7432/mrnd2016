#include<stdio.h>
#include<conio.h>
void bracket(char[], char[]);
void main()
{
	char inp1[10], inp2[10];
	printf("\nEnter input string : ");
	scanf("%s", &inp1);
	printf("\nEnter braces string :");
	scanf("%s", &inp2);
	bracket(inp1, inp2);
	printf("\n");
}
void bracket(char inp1[10], char inp2[10])
{
	int i, j;
	int b1 = 0, b2 = 0, b3 = 0, b4 = 0;
	int c1=0,c2=0,c3=0,c4=0;
	char temp;
	// b1 - {  c1 - }
	// b2 - [  c2 - ]
	// b3 - (  c3 - )
	// b4 - <  c3 - >
	for (i = 0; inp2[i] != '\0'; i++)
	{
		temp = inp2[i];
		switch (temp)
		{
		case '{':
			b1++;
			break;

		case '}':
			c1++;
			break;

		case '[':
			b2++;
			break;

		case ']':
			c2++;
			break;

		case '(':
			b3++;
			break;

		case ')':
			c3++;
			break;

		case '<':
			b4++;
			break;

		case '>':
			c4++;
			break;
		}
	}
	if (b1 != c1 || b2 != c2 || b3 != c3 || b4 != c4)
	{
		printf("\n error \n");
		exit(1);
	}
	else
	{
		while (b1 > 0)
		{
			printf("{");
			b1--;
		}
		while (b2 > 0)
		{
			printf("[");
			b2--;
		}
		while (b3 > 0)
		{
			printf("(");
			b3--;
		}
		while (b4 > 0)
		{
			printf("<");
			b4--;
		}
		printf("%s",inp1);
		while (c4 > 0)
		{
			printf(">");
			c4--;
		}
		while (c3 > 0)
		{
			printf(")");
			c3--;
		}
		while (c2 > 0)
		{
			printf("]");
			c2--;
		}
		while (c1 > 0)
		{
			printf(">");
			c1--;
		}
	}
}