#include<stdio.h>
#include<conio.h>
int permutation(char[], char[]);
void main()
{
	char inp1[10], inp2[10];
	int res;
	printf("\nEnter 1st input string : ");
	scanf("%s", &inp1);
	//gets(inp1);
	printf("\nEnter 2nd input string :");
	scanf("%s", &inp2);
	//gets(inp1);
	res = permutation(inp1, inp2);
	if (res)
		printf("\nTrue\n");
	else
		printf("\nFalse\n");
	getch();
}
int permutation(char inp1[10], char inp2[10])
{
	int len1, len2, i, j;
    static int arr[255],ascii;
	for (len1 = 0; inp1[len1] != '\0'; len1++);
	for (len2 = 0; inp2[len2] != '\0'; len2++);
	for (i = 0; i < len1 - 1; i++)
	{
		ascii = (int)inp1[i];
		arr[ascii] += arr[ascii];
	}
	for (j = 0; j < len2 - 1; j++)
	{
		ascii = (int)inp2[j];
		if (arr[ascii] <= 0)
		{
			printf("\nFalse\n");
			exit(1);
		}
		else
			arr[ascii] -= arr[ascii];
	}
	/*for (i = 0; i < len1 ; i++)
	{
	
		for (j = 0; j < len2 ; j++)
		{	
			if (inp1[i] == inp2[j])
			{
				flag += 1;
				break;
			
			}
				
		}
	}*/
	//if(flag==len1)
		return 1;
//	return 0;
}