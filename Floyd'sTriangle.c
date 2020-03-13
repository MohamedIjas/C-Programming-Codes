#include<stdio.h>
void main()
	{
		int r,n=1;
	  printf("\n Enter the number of rows: ");
		scanf("%d",&r);
	  printf("\n Floyd's triangle containing %d rows is...\n",r);
	  for(int i=0;i<r;i++)
			{
	  			for(int j=0;j<=i;j++)
	  				{	
		  				printf("%d ",n);
		  				n++;
	  				}
	  			
				printf("\n");

		         }


	}

		
		
		
