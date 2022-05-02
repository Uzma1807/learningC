#include <stdio.h>
#include <math.h>

void outputAll(int num);
/*It is a function to provide output, you will be using
this function to print odd perfect squares*/

int Flag = 1;

int main()
{
	int input[5], num;

	// Added Code goes below:
    int n, i, j, square;
	for (i=0; i<5; i++) 
	{   printf("Enter number %d : ", i+1);
		scanf("%d", &input[i]);
	}

	 for (i=0; i<5; i++)
    {
         n = input[i];
         for (j = 1; j <= n; j++)
         {
             square = j * j;
             if (square == n && n % 2 != 0)
                {
                 num = input[i];
                 outputAll(num);
                }
         }
    }



}

void outputAll(int num)
{
	if (Flag == 1)
	{
		Flag = 0;
		printf("\nActualOutput:");
	}
	printf("%d ", num);
}