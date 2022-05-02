#include <stdio.h>
void outputMax(int max);
/*It is a function to display output, you will be using this function
to print maximum*/
int main()
{
 int input[10][10],r,c,row,max; 
 int i,j;

printf("Enter the number of rows: ");
   scanf("%d",&r);
   printf("Enter the number of columns: ");
   scanf("%d",&c);
   printf("\n");
  
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           printf("Enter the elements[%d][%d]: ",i,j);
           scanf("%d",&input[i][j]);
       }
   }
   

    
    printf("\nMatrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", input[i][j]);
        }
        printf("\n");
    }
   
   
   max = 0;
   printf("\nEnter the row number: ");
   scanf("%d",&row);
   for(int i =0;i<c;i++){
       if(max<input[row][i])
       {
           max = input[row][i];
       }
   }
    outputMax(max);
    
    
}
void outputMax(int max)
{
 printf("\nActualOutput:");
 printf("%d", max); 
}