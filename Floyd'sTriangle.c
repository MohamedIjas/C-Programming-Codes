/*  FLOYD'S TRIANGLE
         1
         2 3
         4 5 6
         7 8 9 10
         ..........
         ...........  */


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

		
		
		
