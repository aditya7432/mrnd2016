#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//char fun(char*, int );
void main()
{
	int pos, n, i = 0;
	char *inp;
	printf("\n Enter size of array :");
	scanf("%d", &n);
	inp = (char*)malloc(n*sizeof(char));
	printf("\nEnter %d elements :\n", n);
	for (i = 0; i < n; i++)
		inp[i] = getchar();
	printf("Enter the position from last :");
	scanf("%d", &pos);
	while (inp[i + pos] == '\0')
	{
		i++;
	}
	printf("\n The char at position %d is %c", i, inp[i]);

}