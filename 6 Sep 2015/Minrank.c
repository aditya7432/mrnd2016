#include<stdio.h>
#include<math.h>
int rank(int *, int, int);
int main()
{
	int inp, res, rev = 0, count = 1, d = 0, r = 0, temp = 0, digits[10], i = 0;
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
	res = rank(digits, i, inp);
	printf("\nThe min rank is %d", res);
	printf("\n");
}

int rank(int digits[10], int count, int inp)
{
	int i, j, k, perm[10], temp = 0, num = 0, arr[3], x = 0, ind = 0, exch;
	for (i = 0; i < count; i++)
		for (j = 0; j < count; j++)
			for (k = 0; k < count; k++)
				if (i != j && j != k && i != k)
				{
					//printf("%d%d%d\n",digits[i],digits[j],digits[k]);
					arr[0] = digits[i];
					arr[1] = digits[j];
					arr[2] = digits[k];
					int i, k = 0;
					for (x = 0; x < 3; x++)
						num = 10 * num + arr[x];
					//  printf("%d\n", num);
					perm[ind] = num;
					ind++;
					num = 0;
				}
	for (i = 1; i < ind; i++)
	{
		exch = 0;
		for (j = 0; j < ind - 1; j++)
		{
			if (perm[j] > perm[j + 1])
			{
				temp = perm[j];
				perm[j] = perm[j + 1];
				perm[j + 1] = temp;
				exch++;
			}
		}
		if (exch == 0)
			break;
	}
	for (i = 0; i < ind; i++)
	{
		if (perm[i] == inp)
			return i;
	}
	return 1;
}