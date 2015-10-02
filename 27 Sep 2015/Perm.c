#include<stdio.h>
#include<math.h>
void permute(int *, int, int);
void swap(int *, int, int);
void sort(int, int);
unsigned long int perm[100000];
int ind = 0;
int main()
{
	int inp = 0,rev = 0, temp = 0, digits[10], i = 0;
	printf("Enter a number :");
	scanf("%d", &inp);
	temp = inp;
	while (temp != 0)
	{
		rev = rev * 10;
		rev = rev + temp % 10;
		temp = temp / 10;
	}
	temp = rev;
	while (temp != 0)
	{
		digits[i] = temp % 10;
		temp = temp / 10;
		i++;
	}
//	sort(digits, 0, i-1);
	permute(digits, 0, i);
     sort(0, ind-1);
	for(int k=0;k<ind;k++)
	  printf("%d\n",perm[k]);	
	printf("\n");
}
void swap(int * digits, int i, int j)
{
	int temp = digits[i];
	digits[i] = digits[j];
	digits[j] = temp;
}

void permute(int *digits, int start, int end)
{
	unsigned long int num = 0;
	int x = 0;
	if (start == end)
	{		
		for (x = 0; x < end; x++)
			num = 10 * num + digits[x];
		//printf("%d\n",num);
		perm[ind] = num;
		ind++;
		//printf("\n%d",num);
		return;
	}
	permute(digits, start + 1, end);
	for (int i = start + 1; i < end; i++)
	{
		if (digits[start] == digits[i])
			continue;
		swap(digits, start, i);
		permute(digits, start + 1, end);
		swap(digits, start, i);
	}
}
void sort(int first, int last)
{
	int pivot, j, i,temp;
	if (first<last) 
	{
		pivot = first;
		i = first;
		j = last;
		while (i<j) 
		{
			while (perm[i] <= perm[pivot] && i<last)
				i++;
			while (perm[j]>perm[pivot])
				j--;
			if (i<j)
			{
				temp = perm[i];
				perm[i] = perm[j];
				perm[j] = temp;
			}
		}
		temp = perm[pivot];
		perm[pivot] = perm[j];
		perm[j] = temp;
		sort(first, j - 1);
		sort(j + 1, last);
	}
}

