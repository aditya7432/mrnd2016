#include <stdio.h>
#include <stdlib.h>
void date(char *);
void main()
{
	char inp[11];
	printf("\nEnter the date:(dd mm yy) ");
	scanf("%80[^\n]", &inp);
	printf("\n%s", inp);
	date(inp);
	printf("\n");
}
void date(char inp[11])
{
	int date, mm, year = 0, i = 6, j = 1000, x, y;
	char temp;
	char single[15][15] = { "First","Second","Third","fourth","Fifth","Sixth","Seventh","Eigth","Ninth","Tenth" };
	char units[10][10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	char tens[10][20] = { "Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen","Twenty" };
	char months[15][15] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	char tensx[10][20] = { "Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninty" };
	//date validation check
	if (inp[0] >= '3'&&inp[1]>'1')
	{

		printf("\nInvalid date");
		printf("\nbbb");
		return;
	}

	if (((inp[3] == '0'&&inp[4] == '4') || (inp[3] == '0'&&inp[4] == '6') || (inp[3] == '0'&&inp[4] == '9')) || (inp[3] == '1'&&inp[4] == '1'))
	{

		if (inp[0] >= '3'&&inp[1]>'0')
		{
			printf("\nInvalid date");
			printf("\ncccc");
			return;
		}
	}
	while (i<10)
	{
		temp = inp[i];
		temp = temp - '0'; //temp to hold temp(int value) instead of 'temp(char value)
		x = (int)(temp*j); //http://stackoverflow.com/questions/781668/char-to-int-conversion-in-c
		year = year + x;
		j = j / 10;
		i++;
	}
	if (year % 4 == 0)//for leap year  (condition valid for all years except for centuries)
	{
		if (inp[3] == '0'&&inp[4] == '2')
		{
			if (inp[0] >= '2')
			{
				if (inp[1]>'9')
				{
					printf("\nInvalid date");
					return;
				}
			}
		}
	}
	else if (year % 4 != 0) //non leap year
	{
		if (inp[3] == '0'&&inp[4] == '2')
		{
			if (inp[0] >= '2')
			{
				if (inp[1]>'8')
				{
					printf("\nInvalid date");
					return;
				}
			}
		}
	}
	//month validation check
	if (inp[3] >= '1'&&inp[4]>'2')
	{
		printf("\nInvalid date");
		return;
	}
	printf("\n");

	temp = inp[0];
	temp = temp - '0'; //conv char representation to int
	x = (int)temp; // http://stackoverflow.com/questions/781668/char-to-int-conversion-in-c

	temp = inp[1];
	temp = temp - '0'; //conv char representation to int
	y = (int)temp;  // http://stackoverflow.com/questions/781668/char-to-int-conversion-in-c

					//printing date value
	if (x == 0)
	{
		printf("%s", single[y - 1]);
	}
	else if (x == 1)
	{

		if (y == 0)
			printf("Tenth");
		else
			printf("%s", tens[y - 1]);
	}
	if (x == 2)
	{
		printf("Twenty ");
		printf(" %s", units[y]);
	}
	if (x == 3)
	{
		printf("Thirty ");
		if (y != 0)
			printf(" %s", units[y]);
	}
	//printing month
	temp = inp[3];
	temp = temp - '0'; //conv char representation to int
	x = (int)temp; // http://stackoverflow.com/questions/781668/char-to-int-conversion-in-c

	temp = inp[4];
	temp = temp - '0'; //conv char representation to int
	y = (int)temp;  // http://stackoverflow.com/questions/781668/char-to-int-conversion-in-c

	if (x == 0)
	{
		printf(" %s", months[y - 1]);
	}
	else
	{
		y = y + 10;
		printf(" %s", months[y - 1]);
	}

	//printing year
	i = 6;
	int z=0;
	while (i<10)
	{
		temp = inp[i];
		temp = temp - '0'; //conv char representation to int
		x = (int)temp; // http://stackoverflow.com/questions/781668/char-to-int-conversion-in-c
		if (x != 0)
		{

			if (inp[6] == '1'&&inp[6] <= '9')
			{
				temp = inp[7];
				temp = temp - '0';
				i = i + 2;
				z = (int)temp;
				printf(" %s", tens[z-1]);
				//continue;
			}
			if (i == 6)
			{
				printf(" %s", units[x]);
				printf(" Thousand");
			}
			if (i == 7)
			{
				printf(" %s", units[x]);
				printf(" Hundred");
			}
			if (x == 1 && i == 8)
			{
				temp = inp[i + 1];
				temp = temp - '0'; //conv char representation to int
				x = (int)temp;
				printf(" %s", tens[x - 1]);
				return;
			}
			if (i == 8)
				printf(" %s", tensx[x - 1]);
			if (i == 9)
				printf(" %s", units[x]);
		}
		i++;
	}
}

