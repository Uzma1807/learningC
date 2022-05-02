/*********************************************************************
*********
This program is to find the maximum element in a particular row of a
matrix
Subject Line: TEST:A1P31
emailid:firstyearprog@gmail.com
Faculty Number: 21EEB123
Name:UZMA MASOOD
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

printf("Enter no. of rows: ");
   scanf("%d",&r);
   printf("Enter no. of columns: ");
   scanf("%d",&c);
   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           printf("Enter the elements[%d][%d]: ",i,j);
           scanf("%d",&input[i][j]);
       }
   }
   max = 0;
   printf("Enter the row amount: ");
   scanf("%d",&row);
   for(int i =0;i<c;i++){
       if(max<input[row][i]){
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