#include <stdio.h>
void outputFreq(int count);
/*You will be using this function to print frequency*/
int main()
{
 char str[20],ch;
 int i,count=0;

   printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
    
  

     printf("Enter a string: ");
     scanf("%s",str);
     
    
    
     for (int i = 0; str[i] != '\0'; i++)
    { 
        if(ch == str[i])
        {
            count++;
        }
        
    }
   

    outputFreq(count);
   

 

}
void outputFreq(int count)
{
 printf("\nActualOutput:");
 printf("%d", count); 
}