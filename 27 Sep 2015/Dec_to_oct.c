#include<stdio.h>
#include<conio.h>
int dec_to_oct(int);
int main()
{

  int inp,res;
  printf("\nEnter an input number (decimal format) :");
  scanf("%d",&inp);
  res=dec_to_oct(inp);
  printf("\nDecimal representation : %d \nOctal representation : %d ",inp,res);
  printf("\n");
}
int dec_to_oct(int inp)
{
  int rem,quo,oct[100],i=0,j=0,res=0;
  quo = inp;
  while(quo!=0)
  {	
      oct[i]= quo % 8;
      quo = quo / 8;
      i++;
  }
    int len=i;
  for (j=0; j < i; j++,i--)
    {
	  rem=oct[i];
	  oct[i]=oct[j];
      oct[j] = rem;
    }
  for (i = 1; i <=len ; i++)//converting int array to int number representation
   res = 10 * res + oct[i];
 return res;
}