#include<stdio.h>
int main ()
int i,j;
{
  printf("Here's the pyramid of binary digits\n");
   
  for(i=0;i<6;i++)
   { 
     for(j=0;j<6;j++)
       { 
         printf("01");
       }
     printf("\n");
   }
  return 0;
}
