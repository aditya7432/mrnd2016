#include<stdio.h>
#include<conio.h>
int comp(char[], char[]);
void main()
{
	char n1[10], n2[10], res;
	printf("\n Enter 1st number :");
	scanf("%s", &n1);
	printf("\n Enter 2nd number :");
	scanf("%s", &n2);
	res = comp(n1, n2);
	if (res == 1)
		printf("\n %s is greater \n", n1);
	else if (res == 2)
		printf("\n %s is greater \n", n2);
	else
		printf("\n Both are equal\n");
	getch();
}
int comp(char n1[10], char n2[10])
{
	int i = 0, j = 0, flag = 0, l1, l2;
	while (1)
	{
		if (n1[0] == '-')
			return 2;
		if (n2[0] == '-')
			return 1;
		if (!(n1[0] >= '0'&&n1[0] <= '9'))
			n1[0] = '0';
		if (!(n2[0] >= '0'&&n2[0] <= '9'))
			n2[0] = '0';
		while (n1[i] == '0')
			i++;
		while (n2[j] == '0')
			j++;
		for (l1 = i + 1; n1[l1] != '\0'; l1++);
		for (l2 = j + 1; n2[l2] != '\0'; l2++);
		l1 -= i;
		l2 -= j;

		if (l1 > l2)
			return 1;
		else if (l1 == l2)
		{
			for (i, j; i < l1 && j < l2; i++, j++)
			{
				if (n1[i] > n2[j])
					return 1;
				else if (n2[j] > n1[i])
					return 2;
			}
		}
		return -1;
	}
}
