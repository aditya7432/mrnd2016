#include<stdio.h>
#include<conio.h>
void common_char(char[], char[]);
void main()
{
	char inp1[10], inp2[10];
	printf("\nEnter 1st input string : ");
	scanf("%s", &inp1);
	printf("\nEnter 2nd input string :");
	scanf("%s", &inp2);
	common_char(inp1, inp2);
	printf("\n");
}
void common_char(char inp1[10], char inp2[10])
{
	int len1, len2, i=0,j=0,k=0,flag=0,c=0,x=0;
	char com[10],temp;
	static int arr[255], ascii; 
	for (len1 = 0; inp1[len1] != '\0'; len1++);
	for (len2 = 0; inp2[len2] != '\0'; len2++);
    
	for (i = 0; i < len1; i++)
	{
		ascii = (int)inp1[i];
		arr[ascii] = arr[ascii] + 1;
	}

	for (j = 0; j < len2; j++)
	{
		ascii = (int)inp2[j];
		if (arr[ascii] > 0) 
		{
			temp = (char)ascii; 
			printf("%c\t",temp);
			arr[ascii] = 0;
		}
			
	}
	/*for (i = 0; i < len1-1; i++)
	{
		for (j = 0; j < len2-1; j++)
		{
			if (inp1[i] == inp2[j])
			{
				flag = 0;
				for (k = 0; k < 10; k++)
				{
					if (inp1[i] == com[k])
					{
						flag = 1;
					}
				}
				if (flag == 0)
				{
					com[c] = inp1[i];
					c++;
				}
				break;
			}
		}
	}*/

//.	com[c] = '\0';
//	printf("common char are : %s \n", com);
}