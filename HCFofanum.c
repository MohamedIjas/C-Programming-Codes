#include<stdio.h>

int main() 
 {
   int num1, num2, i, hcf;
   printf("Enter the numbers:");
   scanf("%d", &num1 &num2);
   printf("Enter Number 2:");
   scanf("%d", &num2);

   for(i = 1; i <= num1 || i <= num2; i++) 
    {
      if( num1%i == 0 && num2%i == 0 )
      hcf = i;
    }

   printf("HCF = %d", hcf);
   
   return 0;
 }
