#include<stdio.h>
void main()
	{
		int num, i=1;
    printf("\n Enter the number: ");
		scanf("%d", &num);

		printf("\n Multiplication Table of %d : ", num);
	  while(i<=10)
			{
				printf("\n %d x %d = %d ",num,i,num*i);
				i++;
			}

	}
		
