#include <stdio.h>
void outputMin(int min);
/*It is a function to provide output, you will be using 
this function to print min*/
int main()
{
 int a, b, c, d, e, min; 

 printf("\nEnter the 5 Numbers:\n");
 scanf("\n%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);

 min = a<b?a<c?a<d?a<e?a:e:c<d?c:d:d<e?d:e:b<c?b<d?b<e?b:e:d<e?d:e:c<d?c<e?c:e:d<e?d:e;
      
outputMin(min);
}

void outputMin(int min)
{
 printf("\nActualOutput:");
 printf("%d", min); 
}