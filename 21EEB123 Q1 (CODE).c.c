#include <stdio.h>
/* Calculation of Simple Interest*/
int main ()
{
  float p, n, r, SI;
  printf ("Enter the value of p :");
  scanf ("%f", &p);
  printf ("Enter the value of n :");
  scanf ("%f", &n);
  printf ("Enter the value of r :");
  scanf ("%f", &r);
  /* formula for simple interest */
  SI = (p * n * r) / 100;
  printf ("\nCalculation of Simple Interest");
  printf ("\n% 8.2f\n% 8.2f\n% 8.2f\n% 8.2f", p, n, r, SI);
}
