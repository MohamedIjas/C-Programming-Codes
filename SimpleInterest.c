#include<stdio.h>
void main()
 { 
	  float p,n,r,si;
	  printf("Enter the principle,number of years and rate");
	  scanf("%f%f%f",&p,&n,&r);
	  si=p*n*r/100;
	  printf("The Simple Interest is = %f",si);
 }
