#include<stdio.h>

void main()
	{
    int n, sum=0;
	
		printf("\n Enter Value of n: ");
		scanf("%d", &n);

		for(int i=0;i<n;i++)
			{
				sum+=i*i;
			}

		printf("\n Sum = %d", sum);

	}
