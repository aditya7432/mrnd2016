#include <stdio.h>
int div_by_11(char[]);
int main(int argc, char *argv[])
{
	int k=0,j=0,i=0,ind=0;
	char Q[20],P[5];
	printf("\nEnter P value : ");
	scanf("%s",P);
	printf("\nEnter K value : ");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		for(j=0;P[j]!='\0';j++)
		 {
		   Q[ind]=P[j];
		   ind++;
		 }
	}
	Q[ind]='\0';
	//printf("\nRes is %s",Q);
	i=div_by_11(Q);
	if(i)
	  printf("%s is divisible by 11",Q);
	else
	  printf("%s is not divisible by 11",Q);
}
int div_by_11(char inp[10000])
{
	int n,i,evensum=0,oddsum=0;
	for(i=0;inp[i]!='\0';i++)
	 {
		if(i%2==0)
		  {
			n=(inp[i]-'0');
		    evensum=evensum+n;
		  }
		 else
		  {
			n=(inp[i]-'0');
		    oddsum=oddsum+n;
		   }
      }
    i=oddsum-evensum;
    if(i%11==0)
        return 1;
    return 0; 
}