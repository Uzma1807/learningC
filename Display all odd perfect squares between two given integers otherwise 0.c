#include <stdio.h>
#include <math.h>
void outputAll (int num);
//It is a function to provide output, you will use this function to display odd perfect squares in the interval

int examinePS (int n);
//Declare and define this function to check whether the number is odd perfect square or not

int Flag = 1;

int
main ()
{
  int n1, n2;
  int f = 0, sqr;
  int i;

  printf ("Enter the initial number : ");
  scanf ("%d", &n1);                        //1st positive integer

  printf ("Enter the final number : ");
  scanf ("%d", &n2);                       //2nd positive integer


   //checking for odd perfect square
   
   
int examinePS (int n)
{
  int odd;
  
  for (odd = 1; odd <= n; odd += 2)
    {
      if (odd * odd == n)
	{
	  return n;
	}
    }

  return -1;
}


  for (i = n1 + 1; i < n2; i++)
    {
      sqr = examinePS (i);

      if (sqr != -1)
	{
	  f = 1;
	  outputAll (i);

	}
    }

  if (f == 0)
    {
      outputAll (f);

    }

}


/* 


void
outputAll (int num)
{
  if (Flag == 1)
    {
      Flag = 0;
      printf ("\nActualOutput:");
    }
  printf ("%d ", num);
}
