#include <stdio.h>
void add(char*, char*);
void add1(char*, char*);
void add2(char*,char*);
int main(int argc, char *argv[])
{
	char inp1[20], inp2[20];
	printf("\nEnter the 1st number :");
	scanf("%s", inp1);
	printf("\nEnter the 2nd number :");
	scanf("%s", inp2);
	printf("\n");
	add2(inp1, inp2);
}
void add2(char inp1[20],char inp2[20])
{
	char res[10];
	int i=0,i2=0,j=0,j2=0,temp,n1,n2,ind=0,carry;
	while(inp1[i]!='\0'&&inp2[i]!='\0')
	{
	n1=inp1[i]-'0';
    n2=inp2[i]-'0';
	temp=n1+n2;
	i++;
	//printf("\n temp %d",temp);
	if(temp<=9)
	 {
		
		res[ind]=temp+'0';
		ind++;		
		j=i;
	 }
	printf("\ntemp %d",temp);
	if(temp>9)
	 {
		res[i]=temp%10; 
		carry=temp/10;
		while(j<i)
		{
			res[j]='0';
			j++;
		}
		res[j]=carry+'0';
		//break;
     }
	}
	res[j]='\0';
	printf("\nResult : ");
	for(i=0;res[i]!='\0';i++)
	 {
		printf("%c",res[i]);
	}
}

void add(char inp1[20], char inp2[20])
{
	char res[30];
	int temp,len1,len2,ind=0,i,n1,n2,j;
	int carry = 0;
	for (len1 = 0; inp1[len1] != '\0'; len1++);
	for (len2 = 0; inp2[len2] != '\0'; len2++);
	while (len1 >= 0 || len2 >= 0)
	{
		//if (len1 >= 0 && len2 >= 0)
		if (len1 >= 0)
			n1 = inp1[len1] - '0';
		else
			n1 = 0;
		if (len2 >= 0)
			n2 = inp2[len2] - '0';
		else
			n2 = 0;
	  // temp = (inp1[len1] - '0') + (inp2[len2] - '0') + carry;
		temp = n1 + n2 + carry;
		carry = 0;
		if (temp>9)
		{
			//printf("\nTemp %d", temp);
			carry = temp / 10;
			//printf("\ncarry %d", carry);
			res[ind] = (temp % 10);
			// ind++;
		}
		else
		{
			//printf("\nTemp %d", temp);
			res[ind] = temp;
		}
		// if(len1!=0)
		   len1--;
		 //if(len2!=0)
		  len2--;
	      ind++;
		//printf("\n len1 %d \n len2 %d",len1,len2);
		//printf("\ninp1[len1]=%d",inp1[len1]-'0');
		//printf("\ninp2[len2]=%d",inp2[len2]-'0');
	}
	res[ind+1] = '\0';
	for (j = 0; res[j] != '\0'; j++);
	int d;
	i = 0;
	printf("\nRes : ");
	//for (i = 0; res[i] != '\0'; i++)
	for (i = ind-1; i >= 1;i--)
	 printf("%d", res[i]);
	printf("\n");
}
void add1(char inp1[20], char inp2[20])
{
	int n1 = 0, n2 = 0, res, i;
	for (i = 0; inp1[i] != '\0'; i++)
		n1 = n1 * 10 + inp1[i] - '0';
	for (i = 0; inp2[i] != '\0'; i++)
		n2 = n2 * 10 + inp2[i] - '0';
	printf("\nnum1 = %d \n num 2 = %d ", n1, n2);
	res = n1 + n2;
	printf("\nSum is %d", res);
}