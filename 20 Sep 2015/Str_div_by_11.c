#include <stdio.h>
//#include <conio.h>
int div_by_11(char[]);
int main(int argc, char *argv[]) 
{
	char inp[10000],res;
	printf("\nEnter the input number : ");
	scanf("%s",inp);
	res=div_by_11(inp);
	if(res)
	  printf("\n%s is divisible by 11",inp);
	else  
	  printf("\n%s is not divisible by 11",inp);
	printf("\n");
}
int div_by_11(char inp[])
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