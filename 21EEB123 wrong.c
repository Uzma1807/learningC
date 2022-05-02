/*********************************************************************
*********
This program is to find the maximum element in a particular row of a
matrix
Subject Line: TEST:A1P31
emailid:firstyearprog@gmail.com
Faculty Number: 21EEB123
Name: UZMA MASOOD
**********************************************************************
*********/
#include <stdio.h>
void outputMax(int max);
/*It is a function to display output, you will be using this function
to print maximum*/
int main()
{
 int input[10][10],r,c,row,max; 

 int i,j;

 max=input[10][10];
    
    printf("Enter the number of Rows: ");
    scanf("%d", &r);
    printf("Enter the number of Columns: ");
    scanf("%d", &c);

    

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
           
            printf("Enter value [%d][%d]: ", i, j);
            scanf("%d", &input[i][j]);
        }
    }
    
    printf("\n\nMatrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
             if (input[i][j]>max)
           {
              max=input[i][j];
           }
            printf("%d\t", input[i][j]);
        }
        printf("\n");
    }

outputMax(max);

 
 
}
void outputMax(int max)
{
 printf("\nActualOutput:");
 printf("%d", max); 
}
